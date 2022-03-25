import pygame, sys
from bullet import Bullet
from ino import Ino
import time


def events(screen, gun, bullets):
    for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()
            elif event.type == pygame.KEYDOWN:
                # on right
                if event.key == pygame.K_d:
                    gun.mright = True
                # on left
                if event.key == pygame.K_a:
                    gun.mleft = True
                if event.key == pygame.K_SPACE:
                    new_bullet = Bullet(screen, gun)
                    bullets.add(new_bullet)
            elif event.type == pygame.KEYUP:
                # on right
                if event.key == pygame.K_d:
                    gun.mright = False
                # on left
                if event.key == pygame.K_a:
                    gun.mleft = False

def update(bg_color, screen, stats, sc, pushka, bullets, inos):
    screen.fill(bg_color)
    sc.show_score()
    for bullet in bullets.sprites():
        bullet.draw_bullet()
    pushka.output()
    inos.draw(screen)
    pygame.display.flip()

def update_bullets(screen, stats, sc, inos,bullets):
    # обновлять позиции пули
    bullets.update()
    for bullet in bullets.copy():
        if bullet.rect.bottom <= 0:
            bullets.remove(bullet)
    collisions = pygame.sprite.groupcollide(bullets, inos, True, True) # удаление и пули и прищельца
    if collisions:
        for inos in collisions.values():
            stats.score += 10 * len(inos)
        sc.image_score()
        check_high_score(stats, sc)
        sc.image_guns()
    if len(inos) == 0:
        bullets.empty()
        create_army(screen, inos)
    # print(len(bullets))

def pushka_kill(stats, screen, sc ,pushka, inos, bullets):
    # столкновение пушки и армии
    if stats.guns_left > 0:
        stats.guns_left -= 1
        sc.image_guns()
        inos.empty()
        bullets.empty()
        create_army(screen, inos)
        pushka.create_pushka()
        time.sleep(0.8) 
    else:
        stats.run_game = False
        sys.exit()

def update_inos(stats, screen, sc, pushka, inos, bullets):
    # обновляет позицию прищельцев
    inos.update()
    if pygame.sprite.spritecollideany(pushka, inos):
        pushka_kill(stats, screen, sc, pushka, inos, bullets)
    inos_check(stats, screen, sc,pushka, inos, bullets)

def inos_check(stats, screen, sc,pushka, inos, bullets):
    # добрались ли прищельцы до конца края пушки
    screen_rect = screen.get_rect()
    for ino in inos.sprites():
        if ino.rect.bottom >= screen_rect.bottom:
            pushka_kill(stats, screen, sc, pushka, inos, bullets)
            break

def create_army(screen, inos):
    # создание армии прищельцев
    ino = Ino(screen)
    ino_width = ino.rect.width
    number_ino_x = int((1000 - 2*ino_width) / ino_width) 
    ino_height = ino.rect.height
    number_ino_y = int((600 - 100 - 2*ino_height)/ino_height)
    for row_number in range(number_ino_y):
        for ino_number in range(number_ino_x):
            ino = Ino(screen)
            ino.x = ino_width + ino_width * ino_number
            ino.y = ino_height + ino_height * row_number
            ino.rect.x = ino.x
            ino.rect.y = ino.rect.height + ino.rect.height * row_number
            inos.add(ino)

def check_high_score(stats, sc):
    # проверка новых рекордов
    if stats.score > stats.high_score:
        stats.high_score = stats.score
        sc.image_high_score()
        with open('D:\pp\pp2\pygame\project1\high_score.txt', 'w') as f:
            f.write(str(stats.high_score))
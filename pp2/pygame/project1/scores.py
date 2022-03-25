import pygame.font
from pushka import Pushka
from pygame.sprite import Group
from lifes import Life

class Scores():
    # вывод игровой информиции
    def __init__(self, screen, stats):
        self.screen = screen
        self.screen_rect = screen.get_rect()
        self.stats = stats
        self.text_color = (96, 125, 139)
        self.font = pygame.font.SysFont('arial', 36)
        self.image_score()
        self.image_high_score()
        self.image_guns()
        

    def image_score(self):
        # преобразовывает текст счета в графическое изображение
        self.score_img = self.font.render(str(self.stats.score), True, self.text_color, (0, 0, 0))
        self.score_rect = self.score_img.get_rect()
        self.score_rect.left = self.score_rect.left + 900
        self.score_rect.top = 20
    def image_high_score(self):
        self.high_score_image = self.font.render('Рекорд: ' + str(self.stats.high_score) + '     Осталось жизней:', True, self.text_color, (0, 0, 0))
        self.high_score_rect = self.high_score_image.get_rect()
        self.high_score_centerx = self.screen_rect.centerx
        self.high_score_rect.top = self.high_score_rect.top + 20
    def image_guns(self):
        # количество жизней
        self.guns = Group()
        for gun_number in range(self.stats.guns_left):
            gun = Life(self.screen)
            gun.rect.x = 470 + gun_number*gun.rect.width
            gun.rect.y = 20
            self.guns.add(gun)        
    def show_score(self):
        # вывод счета на экран
        self.screen.blit(self.score_img, self.score_rect)
        self.screen.blit(self.high_score_image, self.high_score_rect)
        self.guns.draw(self.screen)
    
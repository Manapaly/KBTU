import pygame
import sys
import controls
import bullet
from pushka import Pushka
from pygame.sprite import Group
from ino import Ino
from stats import Stats
from scores import Scores

def run():
    pygame.init()
    screen = pygame.display.set_mode((1000,600))
    pygame.display.set_caption('КОСМОС КУТКАРУШЫЛАРЫ')
    bg_color = (0, 0, 0)
    pushka = Pushka(screen)
    bullets = Group()
    inos = Group()
    controls.create_army(screen, inos)
    stats = Stats()
    sc = Scores(screen, stats)

    while True:
        controls.events(screen,pushka, bullets)
        if stats.run_game:
            pushka.update_gun()
            # bullets.update()
            controls.update(bg_color, screen, stats, sc, pushka, bullets, inos)
            controls.update_bullets(screen, stats, sc, inos,bullets)
            controls.update_inos(stats, screen,sc , pushka, inos, bullets )

run()
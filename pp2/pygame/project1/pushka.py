import pygame
from pygame.sprite import Sprite


class Pushka(Sprite):

    def __init__(self,screen):
        #инициализация пушки
        super(Pushka, self).__init__()
        self.screen = screen
        self.image = pygame.image.load('D:\pp\pp2\pygame\project1\images\pushka.png')
        self.rect = self.image.get_rect()
        self.screen_rect = screen.get_rect()
        self.rect.centerx = self.screen_rect.centerx
        self.center = float(self.rect.centerx)
        self.rect.bottom = self.screen_rect.bottom
        self.mright = False
        self.mleft = False
    
    def output(self):
        #рисование пушки
        self.screen.blit(self.image, self.rect)
    
    def update_gun(self):
        # обновление позиции пушки
        self.rect.centerx = self.center
        if self.mright and self.rect.right < self.screen_rect.right:
            self.center += 4.5
        if self.mleft and self.rect.left > 0:
            self.center -= 4.5
    def create_pushka(self):
        # размещает пушку по центру внизу
        self.center = self.screen_rect.centerx
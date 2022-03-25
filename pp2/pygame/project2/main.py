import pygame

class Main():

    def __init__(self,screen):
        #инициализация циферблата
        self.screen = screen
        self.image = pygame.image.load('D:\pp\pp2\pygame\project2\main.jpg')
        self.rect = self.image.get_rect()
        self.screen_rect = screen.get_rect()
        self.rect.centerx = self.screen_rect.centerx
        self.center = float(self.rect.centerx)
        self.rect.bottom = self.screen_rect.bottom
        
    
    def output(self):
        #рисование циферблата
        self.screen.blit(self.image, self.rect)
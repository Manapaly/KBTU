import pygame

class Bullet(pygame.sprite.Sprite):

    def __init__(self, screen, pushka):
        # создание пули в позиции пушки
        super(Bullet, self).__init__()
        self.screen = screen
        self.rect = pygame.Rect(0, 0, 76, 16)
        self.color = 96, 125, 139
        self.speed = 8
        self.rect.centerx = pushka.rect.centerx
        self.rect.top = pushka.rect.top
        self.y = float(self.rect.y)
    
    def update(self):
        # перемещение пули вверх
        self.y -= self.speed
        self.rect.y = self.y
    def draw_bullet(self):
        # рисуем пулю на экране
        pygame.draw.rect(self.screen, self.color, self.rect)
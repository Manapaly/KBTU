import pygame

class Ino(pygame.sprite.Sprite):
    # КЛАСС ОДНОГО ПРИЩЕЛЬЦА
    def __init__(self,screen):
        # задаем начальную позицию
        super(Ino, self).__init__()
        self.screen = screen 
        self.image = pygame.image.load('D:\pp\pp2\pygame\project1\images\ino.png')
        self.rect = self.image.get_rect()
        
        self.rect.x = self.rect.width 
        self.rect.y = self.rect.height 
        self.x = float(self.rect.x)
        self.y = float(self.rect.y)

    def draw(self):
        # вывод прищельца на экран
        self.screen.blit(self.image, self.rect)

    def update(self):
        # перемещает прищельцев
        self.y += 0.1
        self.rect.y = self.y

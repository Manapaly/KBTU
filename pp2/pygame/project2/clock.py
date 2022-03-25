import pygame
from main import Main

def run():
    pygame.init()
    screen = pygame.display.set_mode((1000,1000))
    pygame.display.set_caption('часы')
    clock = pygame.time.Clock()
    main = Main(screen)
    main.output()
    
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                return
        pygame.display.update()
        

run()
import pygame
import sys
import os
from pygame.locals import *

pygame.init()

pygame.mixer.init()

pygame.mixer.music.load("D:\pp\pp2\Lab7\musics\\bala.mp3")
pygame.mixer.music.set_volume(1)
pygame.mixer.music.play()


bg_size = width,height = 800,800
screen = pygame.display.set_mode(bg_size)
pygame.display.set_caption("Music Monster Demo")

pause = False

def count_files(dir): 
    return len([1 for x in list(os.scandir(dir)) if x.is_file()]) 
pause_image = pygame.image.load("D:\pp\pp2\Lab7\images\pause.png").convert_alpha()
unpause_image = pygame.image.load("D:\pp\pp2\Lab7\images\play.png").convert_alpha()

pause_rect = pause_image.get_rect()
pause_rect.left,pause_rect.top = (width - pause_rect.width) // 2,(height - pause_rect.height) // 2

clock = pygame.time.Clock()

path = 'D:\pp\pp2\Lab7\musics'
all_musics = [ name for name in os.listdir(path) if not os.path.isdir(os.path.join(path, name)) ]
count_of_music = count_files(path)
print(count_of_music)

# print(*all_musics)
i = 0
r = 240
while True:
    # print(all_musics[i])
    pygame.mixer.music.set_volume(1)
    # pygame.mixer.music.play()
    for event in  pygame.event.get():
        if event.type == QUIT:
               pygame.quit()
               sys.exit()
        #   if event.type == MOUSEBUTTONDOWN:
        #        if event.button == 1:
        #             winner_sound.play()
        #        if event.button == 3:
        #             loser_sound.play()
        if event.type == KEYDOWN:
            if event.key == K_SPACE:
                pause = not pause
        if event.type == KEYDOWN:
            if event.key == K_RIGHT:
                print(i)
                i = i + 1
                if i > count_of_music-1:
                    i = 0  
                olen = "D:\pp\pp2\Lab7\musics\\" + str(all_musics[i])
                
                pygame.mixer.music.load(olen)
                pygame.mixer.music.play()
                for i in range(1,8):
                    pygame.mixer.music.queue("D:\pp\pp2\Lab7\musics\\" + str(all_musics[(i+1)%8]))
                # clock.tick(240)
                
            if event.key == K_LEFT:
                print(i)
                i = i - 1
                if i <= 0:
                    i = count_of_music-1
                olen = "D:\pp\pp2\Lab7\musics\\" + str(all_musics[i])
                pygame.mixer.music.load(olen)
                pygame.mixer.music.play()
                # clock.tick(240)
                
            if event.key == K_l:
                r = 240


    screen.fill((255,255,255))
     
    if pause:
          screen.blit(pause_image,pause_rect)
          pygame.mixer.music.pause()
    else:
          screen.blit(unpause_image,pause_rect)
          pygame.mixer.music.unpause()

    pygame.display.flip()

    


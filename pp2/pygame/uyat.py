#-*- coding: utf-8 -*-
import os,time,sys
from sys import exit
import pygame
from pygame.locals import *
from mutagen.mp3 import MP3
from random import choice


def rp(relative_path):
    """ Get absolute path to resource, works for dev and for PyInstaller """
    try:
        # PyInstaller creates a temp folder and stores path in _MEIPASS
        base_path = sys._MEIPASS
    except Exception:
        base_path = os.path.abspath(".")

    return os.path.join(base_path, relative_path)

pygame.init()
screen = pygame.display.set_mode((640, 480), 0, 32)
pygame.display.set_caption("music")
# Инициализировать музыкальный проигрыватель
pygame.mixer.init()
# Фоновое изображение
music_bg = rp(os.path.join('src','D:\pp\pp2\Lab7\musics\images\ФОН.jpg'))
# Изображение точки прогресса
dian_filename = rp(os.path.join('src','D:\pp\pp2\pygame\ooo.png'))
dian = pygame.image.load(dian_filename)
# Шрифт
font_obj = pygame.font.Font('C:\Windows\Fonts\simsun.ttc',20)
# Базовое значение смещения
x = 80
# Начало координаты x индикатора выполнения
begin_x = 40
# Координата x конца индикатора выполнения
end_x = 600
# Играет ли песня, по умолчанию не играет
is_sing = False
# Следует ли ставить на паузу, по умолчанию не ставится
is_pause = False
# Перемотать вперед
is_kuaijin = False
# Координата X после быстрой перемотки вперед
jindu_x = -1
# Определить текущую переменную песни
global c_music
# Определите время начала песни, текущее время, время начала паузы, время окончания паузы
global start_time, current_time, pause_start_time, pause_end_time,pause_duration_time
pause_start_time =0
pause_end_time =0
pause_duration_time =0




# Отображение названия песни на плеере
def draw_song_name(music):
    # Взять название песни
    music_name = music[0].split("\\")[-1]
    # print(music_name)
    wbk_obj = font_obj.render(music_name, True, (0, 255, 255))
    k_obj = wbk_obj.get_rect()
    k_obj.center = (340, 200)
    screen.blit(wbk_obj, k_obj)
    pygame.display.update()


# Собирать файлы формата MP3 в определенный каталог и подкаталоги
# Вернуть путь к песне, продолжительность песни
# [['E: \\ musics \\ Mirror_Yohee_128K.mp3', 236], ['E: \\ musics \\ здесь_Nobigdyl_128K.mp3', 188], ['E: \\ musics \\   _       _ 128K.mp3 ', 282], [' E: \\ musics \\ aaa \\   _       _128K.mp3 ', 282]]
def collect_songs(fidir):
    musics =[]
    for root, dirs, files in os.walk(fidir):
        for file in files:
            tmp =[]
            if file.endswith('mp3'):
                file = os.path.join(root,file)
                song = MP3(file)
                duration = round(song.info.length)
                tmp.append(file)
                tmp.append(duration)
                musics.append(tmp)
    return musics

musics = collect_songs('D:\pp\pp2\Lab7\musics')
print(musics)

# Воспроизвести песню в случайном порядке
def sing_a_song(musics):
    # Произвольно выбрать музыкальное произведение
    music = choice(musics)
    print(type(musics))
    pygame.mixer.music.load(music[0])
    pygame.mixer.music.play()
    print("Начать воспроизведение:% s -% s секунд"%(music[0] , str(music[1])))
    return music


# Нарисуйте точку, представляющую текущий прогресс
# Нарисуйте круг с 5 точками в диаметре и поместите его на 100, 150, цветом (0,255,255)
# dian = pygame.draw.circle(screen,(0,255,255),(begin_x,150),6)


# Нарисовать элементы управления воспроизведением
def draw_kongjian(is_sing,is_pause):
    # Индикатор выполнения рисования
    # Нарисуйте линию шириной 2, высота y - 149, x - от 40 до 600, цвет - (0,100,100)
    pygame.draw.line(screen, (0, 100, 100), (40, 149), (600, 149), 2)
    # Ничья игра, кнопка паузы
    # Сначала нарисуйте круглую рамку радиусом 20
    pygame.draw.circle(screen, (0, 255, 255), (x + 80, 100), 20, 2)
    # Нарисуйте треугольник и начните играть
    pygame.draw.line(screen, (0, 255, 255), (x + 73.7, 107.5), (x + 73.7, 93), 2)  # Вертикальная линия
    # Если играется без паузы
    if is_sing and not is_pause:
        # Скрыть треугольник
        pygame.draw.line(screen, (0, 89, 115), (x + 73.7, 107.5), (x + 87.3, 100), 2)
        pygame.draw.line(screen, (0, 89, 115), (x + 73.7, 93), (x + 87.3, 100), 2)
        # Отобразить вторую вертикальную линию
        pygame.draw.line(screen,(0,255,255),(x+83.7,107.5),(x+83.7,93),2)
    else:
        # Скрыть вторую вертикальную линию
        pygame.draw.line(screen, (0, 89, 115), (x + 83.7, 107.5), (x + 83.7, 93), 2)
        # Отображать треугольник
        pygame.draw.line(screen,(0,255,255),(x+73.7,107.5),(x+87.3,100),2)
        pygame.draw.line(screen,(0,255,255),(x+73.7,93),(x+87.3,100),2)

    # Нарисовать кнопку песни
    pygame.draw.line(screen, (0, 255, 255), (x - 10, 110), (x - 10, 90), 2)
    pygame.draw.line(screen, (0, 255, 255), (x - 10, 100), (x + 10, 115), 2)
    pygame.draw.line(screen, (0, 255, 255), (x - 10, 100), (x + 10, 85), 2)
    pygame.draw.line(screen, (0, 255, 255), (x + 10, 115), (x + 10, 85), 2)

    # Нарисуйте следующую кнопку
    pygame.draw.line(screen, (0, 255, 255), (x + 170, 110), (x + 170, 90), 2)
    pygame.draw.line(screen, (0, 255, 255), (x + 170, 100), (x + 150, 115), 2)
    pygame.draw.line(screen, (0, 255, 255), (x + 170, 100), (x + 150, 85), 2)
    pygame.draw.line(screen, (0, 255, 255), (x + 150, 115), (x + 150, 85), 2)

# Отображение прогресса воспроизведения
def move(current_time,start_time,pause_duration_time,c_music):
    if pause_end_time == 0 and pause_start_time != 0:
        duration_time = round(pause_start_time - start_time - pause_duration_time)
    else:
        duration_time = round(current_time - start_time - pause_duration_time)
    song_total_time = c_music[1]
    speed = (end_x-begin_x)/song_total_time
    current_x = begin_x + duration_time*speed
    try:
        screen.blit(dian,(current_x,148))
        pygame.display.update()
    except:
        print(current_time)
        print(start_time)
        print(pause_duration_time)
        exit()

# Функция быстрой перемотки вперед и назад
def kuaijin(jindu_x,c_music):
    # Расстояние для прыжка на d_x
    d_x = jindu_x - begin_x
    song_total_time = c_music[1]
    # Время перейти к d_song_time
    d_song_time = round(song_total_time*(d_x/560),1)
    # Перемотка песни на d_song_time
    pygame.mixer.music.play(0,d_song_time)




while True:
    # Первый шаг - нарисовать фон
    screen.fill((0, 0, 0))  # ---------------- Добавлено недавно
    # Второй шаг - добавить фоновое изображение
    bg = pygame.image.load(music_bg)
    screen.blit(bg, (0, 0))
    # Четвертый шаг, нарисовать элементы управления
    draw_kongjian(is_sing,is_pause)

    # print("status:-------" + str(pygame.mixer.music.get_busy()))
    # Если музыка играет, то есть ошибка == При паузе возврат все равно 1
    if pygame.mixer.music.get_busy() == 1:
        is_sing = True
    else:
        is_sing = False

    # Если не играет музыка
    if not is_sing:
        # Шаг 5, начни петь
        c_music = sing_a_song(musics)
        # Время начала воспроизведения записи
        start_time = time.time()
        # Длительность паузы установлена ​​на 0
        pause_start_time = pause_end_time = pause_duration_time = 0
        # Начальное положение индикатора выполнения сбрасывается на 40
        begin_x = 40
        # Шестой шаг, отображение названия песни
        draw_song_name(c_music)
        # Изменить статус воспроизведения
        is_sing = not is_sing
    # Если вы поете
    else:
        # Шестой шаг, отображение названия песни
        draw_song_name(c_music)
        current_time = time.time()
        move(current_time, start_time, pause_duration_time, c_music)


    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()
        if event.type == MOUSEBUTTONDOWN:
            # Если щелкнуть левой кнопкой мыши, получить текущие координаты мыши
            pressed_array = pygame.mouse.get_pressed()
            if pressed_array[0] == 1:
                mouse_x, mouse_y = event.pos
                print('Нажмите левую кнопку, позиция (% d,% d)'%(mouse_x,mouse_y))
                # Определить, какая кнопка была нажата
                if 80 < mouse_y < 120:
                    if x - 5 < mouse_x < x + 15:
                        # Щелкнул предыдущую песню
                        c_music = sing_a_song(musics)
                        is_pause = False
                        is_kuaijin = False
                        # Время начала записи
                        start_time = time.time()
                        # Длительность паузы установлена ​​на 0
                        pause_start_time = pause_end_time = pause_duration_time = 0
                        # Начальное положение индикатора выполнения установлено на 40
                        begin_x = 40
                        # Шестой шаг, отображение названия песни
                        draw_song_name(c_music)
                        print('Щелкнул предыдущую песню')
                    elif x+60 < mouse_x < x+100:
                        # Изменить, нужно ли ставить на паузу
                        is_pause = not is_pause
                        # Если нет паузы
                        if not is_pause:
                            # Начать играть
                            pygame.mixer.music.unpause()
                            # Предварительное время окончания записи
                            pause_end_time = time.time()
                            # Рассчитываем продолжительность паузы
                            pause_duration_time = pause_duration_time + pause_end_time - pause_start_time
                            # Когда пауза закончилась, время начала паузы устанавливается на 0
                            pause_end_time = pause_start_time = 0
                        # Если приостановлено
                        else:
                            # Пауза воспроизведения
                            pygame.mixer.music.pause()
                            # Предварительное время начала записи
                            pause_start_time = time.time()

                        print("Пауза нажата")
                    elif x+145 < mouse_x < x+170:
                        # Щелкнул следующую песню
                        c_music = sing_a_song(musics)
                        is_pause = False
                        is_kuaijin = False
                        # Время начала записи
                        start_time = time.time()
                        # Длительность паузы установлена ​​на 0
                        pause_start_time = pause_end_time = pause_duration_time =0
                        # Начальное положение индикатора выполнения установлено на 40
                        begin_x = 40
                        # Шестой шаг, отображение названия песни
                        draw_song_name(c_music)
                        print("Нажата следующая песня")
                # Если вы щелкнете позицию индикатора выполнения
                elif 155> mouse_y >145:
                    kuaijin(mouse_x,c_music)
                    begin_x = mouse_x
                    pause_end_time = pause_start_time = pause_duration_time = 0
                    move(current_time,start_time,pause_duration_time,c_music)
                    is_kuaijin = True
                    print("Перемотка вперед")

        pygame.display.update()
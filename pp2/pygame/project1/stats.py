class Stats():
    # отслеживание статистики

    def __init__(self):
        self.reset_stats()
        self.run_game = True
        with open('D:\pp\pp2\pygame\project1\high_score.txt', 'r') as f:
            self.high_score = int(f.readline())
    def reset_stats(self):
        self.guns_left = 8
        self.score = 0
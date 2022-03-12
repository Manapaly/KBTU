def palindromic(sequence):
    """Возвращает True, если последовательность является палиндромом."""
    for n, m in zip(sequence, reversed(sequence)):
        # print(f'{n} and {m}')
        if n!=m:
            return False
    return True
print(palindromic('andbsknc'))
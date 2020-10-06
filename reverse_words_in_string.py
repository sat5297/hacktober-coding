def reverse_words(string):
    words_list = string.split()
    words_list.reverse()
    return ' '.join(words_list)


if __name__ == '__main__':
    print(reverse_words("hit me baby one more time"))
    print(reverse_words("the world is not enough"))
    print(reverse_words("water water everywhere but not a drop to drink"))


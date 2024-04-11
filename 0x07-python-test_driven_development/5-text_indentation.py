#!/usr/bin/python3

"""prints a text with 2 \n after each of these characters: ., ? and :"""


def text_indentation(text):
    """prints a text with 2 \n after each of these characters: ., ? and :"""
    if type(text) is not str:
        raise TypeError("text must be a string")
    for c in ".?:":
        text = (c + "\n\n").join([line.strip(" ") for line in text.split(c)])
    print(text, end="")

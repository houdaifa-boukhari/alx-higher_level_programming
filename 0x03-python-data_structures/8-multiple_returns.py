#!/usr/bin/python3

def multiple_returns(sentence):
    if not sentence[0] or not sentence:
        return (0, None)
    return (len(sentence), sentence[0])

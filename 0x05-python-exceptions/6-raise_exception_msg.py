#!/usr/bin/python3

def raise_exception_msg(message=""):
    try:
        print("{}".format(message))
    except (ValueError, TypeError):
        raise NameError

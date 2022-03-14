def hello(func):
    def inner():
        print("Hello ", end=" ")
        func()
    return inner


@hello
def name():
    print("Alice")


if __name__ == "__main__":

    name()

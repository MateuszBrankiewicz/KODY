import random
import time
import keyboard

karty = range(2, 11)

wynikBota = 0
wynikGracza = 0

maxWynik = 21


def menu():
    print("---- Menu ----")
    print("1.Graj")
    print("2.Instrukcja")
    print("--------------")

    wybor = input("-->")

    if wybor == "1" or wybor == "graj":
        gra(karty, wynikGracza)

    elif wybor == "2" or wybor == "instrukcja":
        instrukcja()

    else:
        print("Nie ma takiej opcji :(")
        menu()


def instrukcja():
    print("------------------ Instrukcja ------------------")
    print("""
        1.Zdobyj jak najwięcej punktów nie przekraczając 21.
        2.Aby dobrać kartę naciśnij 'K'.
        3.Aby zakończyć dobieranie kart kliknij 'P'.
        4.Miłej zabawy
    """)
    print("-------------------------------------------------")

    wybor = input("Wciśnij dowolny przycisk aby kontynuować")

    menu()


def gra(karty, wynikGracza):
    while True:
        if keyboard.is_pressed('K'):
            time.sleep(0.2)
            nowaKarta = random.choice(karty)
            wynikGracza += nowaKarta
            print(wynikGracza)

        if keyboard.is_pressed('P'):
            time.sleep(0.2)
            bot(karty, wynikBota, wynikGracza)
            break

def bot(karty, wynikBota, wynikGracza):
    while True:
        if wynikBota < 16:
            nowaKartaBota = random.choice(karty)
            wynikBota += nowaKartaBota

        elif wynikBota >= 16:
            liczenie(wynikBota, wynikGracza)
            break



def liczenie(wynikBota, wynikGracza):
    if wynikBota > wynikGracza:
        print("Przegrałeś! :(")
        print("Wynik gracza " + str(wynikGracza))
        print("Wynik bota " + str(wynikBota))

    if wynikGracza > wynikBota:
        print("Wygrałeś! :)")
        print("Wynik gracza " + str(wynikGracza))
        print("Wynik bota " + str(wynikBota))

    if wynikBota == wynikGracza:
        print("Remis! :P")
        print("Wynik gracza " + str(wynikGracza))
        print("Wynik bota " + str(wynikBota))


menu()
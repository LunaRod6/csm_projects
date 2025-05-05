temperature=int(input("What is the current temperature?"))
socks_color=input("What color of sock you are wearing?(black or white)")
pizza_topping=input("What topping did you have on your pizza today?(pepperoni, mushrooms, pepperoni and mushrooms, plain)")
if temperature > 65:
    if socks_color == "black":
        if pizza_topping == "pepperoni":
            print("Sunny")
        elif pizza_topping == "mushrooms":
            print("Partly cloudy")
        elif pizza_topping == "pepperoni and mushrooms":
            print("Cloudy")
        elif pizza_topping == "plain":
            print("Foggy")
    elif socks_color == "white":
        if pizza_topping == "pepperoni":
            print("Snowy")
        elif pizza_topping == "mushrooms":
            print("Hail")
        elif pizza_topping == "pepperoni and mushrooms":
            print("Tornado")
        elif pizza_topping == "plain":
            print("Hurricane")
else:
    if socks_color == "black":
        if pizza_topping == "pepperoni":
            print("Windy")
        elif pizza_topping == "mushrooms":
            print("Stormy")
        elif pizza_topping == "pepperoni and mushrooms":
            print("Typhoon")
        elif pizza_topping == "plain":
            print("Blizzard")
    elif socks_color == "white":
        if pizza_topping == "pepperoni":
            print("Humid")
        elif pizza_topping == "mushrooms":
            print("Cold")
        elif pizza_topping == "pepperoni and mushrooms":
            print("Hot")
        elif pizza_topping == "plain":
            print("Overcast")
seed_color=input("What color is the seed (red, blue, or green)?")
soil_moisture=input("Is the soil wet or dry?")
temperature=int(input("What is the soil temperature?"))
if seed_color == "red":
    if temperature > 75:
        if soil_moisture == "wet":
            print("Sunflower")
        elif soil_moisture == "dry":
            print("Dandelion")
    else:
        print("Mushroom")
if seed_color == "blue":
    if temperature >= 60 and temperature <= 70:
        if soil_moisture == "wet":
            print("Daisy")
        elif soil_moisture == "dry":
            print("Rose")
    else:
        print("Mushroom")
if seed_color == "green":
    if temperature > 65:
        if soil_moisture == "wet":
            print("Carnation")
        elif soil_moisture == "dry":
            print("Lily")
    else:
        print("Mushroom")

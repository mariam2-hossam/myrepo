from classes1 import Villains,villain1, villain2
turns=0
def main():
    global turns
    if __name__ == "__main__" :
        print("Gru :    Vector:")
        print("")
        print("health:",villain1.Health, "        health: ", villain2.Health)
        print("energy:", villain1.Energy,"    energy: ",villain2.Energy)
        print("shield:",villain1.Shield , "      shield: ",villain2.Shield,1) 

        if turns%2 == 0 and villain1.Health > 0 and villain2.Health > 0 :
            print("")
            print("Gru's Turn")
            print("")
            Villains.turnGru()
            turns +=1
            main()

        elif turns%2 == 1 and villain1.Health > 0 and villain2.Health > 0:

            print("")
            print("Vector's Turn")
            print("")
            Villains.turnVector()
            turns +=1

            main()
        elif villain1.Health >0 and villain2.Health <=0:
            print("Vector")
        elif villain1.Health <= 0 and villain2.Health >0:
            print ("Gru died.") 
main()

#Pizza Ordering Chatbot in python
import time
#Define menu with prices in rupees
menu = {
    "pepperoni":799,
    "margherita":699,
    "veggies":749,
    "meat lovers":999,
    "hawaiian":899
    }
#Define payment methods
payment_methods = ["cash on delivery","online payment","upi","card payment"]
#define functuion for ordering
def order_pizza():
    #Display menu to user
    print ("\n\nWelcome to Happy Pizzas!")
    print ("Here's our menu:")
    for item in menu:
            print (f"{item.title()}- RS.{menu[item]}")
    print ("\n\n")
    #Get user input for pizza choice
    pizza_choice = input ("What would you like to order?").lower()
    #Check if pizza choice is valid
    while pizza_choice not in menu:
      pizza_choice = input ("Sorry, we don't have that on our menu. Please choose something else:").lowere()
    #Get user input fpor method
    payment_choice = input("How would you like to pay?").lower()
    #Check if payment method is valid
    while payment_choice not in payment_methods:
        payment_choice = input ("Sorry , we don't accept that payment method. Please choose something else:").lower()
            #Calculate total cost of pizza
    total_cost = menu [pizza_choice]
            #generate receipt

    print("Generating receipt....")
    time.sleep(2)
    print("\n\n")
    print(f"You ordereda pizza {pizza_choice.title()} pizza from Happy Pizzas for Rs.{menu[pizza_choice]}.")
    print (f"Your total cost is Rs. {total_cost}.")
    print (f"Payment method: {payment_choice.title()}.")
    print (f"Thank you for your order!")


            #call the order_pizza function to start the chatbot
order_pizza()

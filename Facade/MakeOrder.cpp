#include"MakeOrder.hpp"

void MakeOrder::orderFood(){

waiter.writeOrder();
waiter.sendToKitchen();
kitchen.prepareFood();
kitchen.callWaiter();
waiter.serveCustomer();
kitchen.washDishes();

}
#include <iostream>
#include <vector>




void game() {

  std::vector<std::string> sq = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

  std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  int choice;
  std::string px = "x";
  std::string po = "o";
  int move = 0;
  bool win = false;

  while((win != true)) {


    std::cout <<"Player 1! Your move: ";
    std::cin >>choice;

    if (move == 8) {
      win = true;
      std::cout<<"\nStalemate\n";
    }

    if ((sq[0] == sq[1]) && (sq[1] == sq[2])) {
      win = true;
    } else if ((sq[3] == sq[4]) && (sq[4] == sq[5])) {
      win = true;
    } else if ((sq[6] == sq[7]) && (sq[7] == sq[8])) {
      win = true;
    } else if ((sq[0] == sq[3]) && (sq[3] == sq[6])) {
      win = true;
    } else if ((sq[1] == sq[4]) && (sq[4] == sq[7])) {
      win = true;
    } else if ((sq[2] == sq[5]) && (sq[5] == sq[8])) {
      win = true;
    } else if ((sq[0] == sq[4]) && (sq[4] == sq[8])) {
      win = true;
    } else if ((sq[2] == sq[4]) && (sq[4] == sq[6])) {
      win = true;
    } else {
      std::cout <<"\n";
    }

  if (win != true) {

  if (choice == 1) {

    if (sq[0] != "x" && sq[0] != "o") {
    sq[0] = px;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 2) {

    if (sq[1] != "x" && sq[1] != "o") {
    sq[1] = px;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 3) {

    if (sq[2] != "x" && sq[2] != "o") {
    sq[2] = px;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 4) {

    if (sq[3] != "x" && sq[3] != "o") {
    sq[3] = px;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 5) {

    if (sq[4] != "x" && sq[4] != "o") {
    sq[4] = px;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 6) {

    if (sq[5] != "x" && sq[5] != "o") {
    sq[5] = px;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 7) {

    if (sq[6] != "x" && sq[6] != "o") {
    sq[6] = px;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 8) {

    if (sq[7] != "x" && sq[7] != "o") {
    sq[7] = px;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 9) {

    if (sq[8] != "x" && sq[8] != "o") {
    sq[8] = px;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else {

    std::cout<<"Invalid choice!\n";

  }

  } 

  if ((sq[0] == sq[1]) && (sq[1] == sq[2])) {
      win = true;
    } else if ((sq[3] == sq[4]) && (sq[4] == sq[5])) {
      win = true;
    } else if ((sq[6] == sq[7]) && (sq[7] == sq[8])) {
      win = true;
    } else if ((sq[0] == sq[3]) && (sq[3] == sq[6])) {
      win = true;
    } else if ((sq[1] == sq[4]) && (sq[4] == sq[7])) {
      win = true;
    } else if ((sq[2] == sq[5]) && (sq[5] == sq[8])) {
      win = true;
    } else if ((sq[0] == sq[4]) && (sq[4] == sq[8])) {
      win = true;
    } else if ((sq[2] == sq[4]) && (sq[4] == sq[6])) {
      win = true;
    } else {
      std::cout <<"\n";
    }

  if (win != true) {
  
  std::cout <<"Player 2! Your move: ";
  std::cin >>choice;

  if (choice == 1) {

    if (sq[0] != "x" && sq[0] != "o") {
    sq[0] = po;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 2) {

    if (sq[1] != "x" && sq[1] != "o") {
    sq[1] = po;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 3) {

    if (sq[2] != "x" && sq[2] != "o") {
    sq[2] = po;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 4) {

    if (sq[3] != "x" && sq[3] != "o") {
    sq[3] = po;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 5) {

    if (sq[4] != "x" && sq[4] != "o") {
    sq[4] = po;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 6) {

    if (sq[5] != "x" && sq[5] != "o") {
    sq[5] = po;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 7) {

    if (sq[6] != "x" && sq[6] != "o") {
    sq[6] = po;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 8) {

    if (sq[7] != "x" && sq[7] != "o") {
    sq[7] = po;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else if (choice == 9) {

    if (sq[8] != "x" && sq[8] != "o") {
    sq[8] = po;
    move++;
    } else {
      std::cout <<"Occupied!\n";
    }

    std::cout<<" "<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<" \n";
  std::cout<<"-----------\n";
  std::cout<<" "<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<" \n";

  } else {

    std::cout<<"Invalid choice!\n";

  }

  }

  }
  
} 
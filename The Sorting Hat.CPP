#include <iostream>
int main()
{
  // Score variables
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  // Answer variables
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  // Starting  message
  std::cout << "========================\n";
  std::cout << "=The Sorting Hat Quiz!!=\n";
  std::cout << "========================\n";

  // Question one:
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";
  std::cout << "  Enter here: ";
  std::cin >> answer1;

  // Conditions and logic for question one:
  if ( answer1 == 1 ){
    hufflepuff++;

  }
  else if ( answer1 == 2 ){
    slytherin++;

  }
  else if ( answer1 == 3 ){
    ravenclaw++;

  }
  else if ( answer1 == 4 ){
    gryffindor++;

  }
  else {
    std::cout << "Input invalid try again, you have to enter the numbers.\n";

  }

  // Question two:
  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";
  std::cout << "  Enter here: ";
  std::cin >> answer2;

  //Conditions and logic for question two:
  if ( answer2 == 1 ){
    gryffindor++ && ravenclaw++;

  }
  else if ( answer2 == 2 ){
    hufflepuff++ && slytherin++;

  }
  else {
    std::cout << "Input invalid try again, you have to enter the numbers.\n";

  }

  // Question three 
  std::cout << "Q3) Which kind of instrument most pleases your ear?";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n";
  std::cout << "  Enter here: ";
    std::cin >> answer3;

  // Conditions and logic for question three:
  if ( answer3 == 1 ){
    slytherin++;

  }
  else if ( answer3 == 2 ){
    hufflepuff++;
  
  }
  else if ( answer3 == 3 ){
    ravenclaw++;

  }
  else if ( answer3 == 4 ){
    gryffindor++;

  }
  else {
    std::cout << "Input invalid try again, you have to enter the numbers.\n";
    
  }

  // Question four:
  std::cout << "Q4) Which road tempts you most?\n";
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n";
  std::cout << "  Enter here: ";
  std::cin >> answer4;

  // Conditions and logic for question four:
  if ( answer4 == 1 ){
    hufflepuff++;

  }
  else if ( answer4 == 2 ){
    slytherin++;

  }
  else if ( answer4 == 3 ){
    gryffindor++;

  }
  else if ( answer4 == 4 ){
    ravenclaw++;

  }
  else {
    std::cout << "Input invalid try again, you have to enter the numbers.\n";
  }

  int max = 0;

  std::string house;

  if ( gryffindor > max ){
    max = gryffindor;
    house = "Gryffindor";

  }
  else if ( hufflepuff > max ){
    max = hufflepuff;
    house = "Hufflepuff";

  }
  else if ( slytherin > max ){
    max = slytherin;
    house = "Slytherin";

  }

  std::cout << house << "!\n";

  return 0;
}

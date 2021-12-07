#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if(rank == 83)
  cout << "You have received Super Ultra Rare Unit!!!\n";
  if(rank == 65 || rank == 83)
  cout << "You have received 5 gems.\n";
  if(rank == 66 || rank == 65 || rank == 83)
  cout << "You have received 1 gems.\n";
  if(rank == 67 || rank == 66 || rank == 65 || rank == 83)
  cout << "You have received 2000 coins.\n";
  if(rank == 68 || rank == 67 || rank == 66 || rank == 65 || rank == 83)
  cout << "You have received very KAK items.\n";
  return 0;
}

// accessing mapped values -- borrowed from http://www.cplusplus.com/reference/map/map/operator[]/
#include <iostream>
#include <map>
#include <string>

int main ()
{
  // key is a string, value is a string
  std::map<std::string,std::string> mymap;

  mymap["yankee"]="she fell in love with the drummer";
  mymap["hotel"]="...another and another";
  mymap["foxtrot"]=mymap["hotel"] + ", she fell in love";

  std::cout << "mymap[\"hotel\"] is " << mymap["hotel"] << '\n';
  std::cout << "mymap now contains " << mymap.size() << " elements.\n\n";

  std::cout << "Here are the contents of mymap:\n";
  // iterate over all elements in map
  for (auto &x: mymap)
  {
    std::cout << x.first << ": " << x.second << std::endl;
  }

  return 0;
}

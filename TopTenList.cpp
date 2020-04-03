//Manages a list of top ten hyperlinks
#include <string>
#include <vector>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::vector;
using std::cout;

TopTenList::TopTenList()
{
    _list.resize(11);
}

void TopTenList::display_forward()
{
    cout << "Programming Language Top Ten List" << std::endl;
    unsigned count = 1;
    for(vector<Hyperlink>::iterator it = _list.begin(); it != _list.end(); it++)
    {
        if(it != _list.begin())
        {
            cout << count << ". " << it->text << std::endl;
            count++;
        }
    }
}
    
void TopTenList::display_backward()
{
    cout << "Programming Language Top Ten List" << std::endl;;
    unsigned count = 10;
    for(vector<Hyperlink>::reverse_iterator rit = _list.rbegin(); rit != _list.rend(); rit++)
    {
        if(count != 0)
        {
            cout << count << ". " << rit->text << std::endl;
            count--;
        }
    }
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list.at(index) = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index);
}

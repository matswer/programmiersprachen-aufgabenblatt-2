#include "color.hpp"

Color::Color()                // Standardkonstruktor
  :r_(0),g_(0),b_(0)   // Memberinitialisierungsliste
  {}
Color::Color(float b)                // Standardkonstruktor
  :r_(0),g_(0),b_(b)   // Memberinitialisierungsliste
  {}

Color::Color(float r, float g, float b)
  : r_(r), g_(g), b_(b)
{
  if (r_ < 0)
  {
    r_ = 0; //keine negativen Werte
  }
  else if (r_ > 1)
  {
    r_ = r_/255;
  }
  else if (r_ > 255)
  {
    r_ = 1;
  }
  if (g_ < 0)
  {
    g_ = 0; //keine negativen Werte
  }
  else if (g_ > 1)
  {
    g_ = g_/255;
  }
  else if (g_ > 255)
  {
    g_ = 1;
  }
if (b_ < 0)
  {
    b_ = 0; //keine negativen Werte
  }
  else if (b_ > 1)
  {
    b_ = b_/255;
  }
  else if (b_ > 255)
  {
    b_ = 1;
  }
}

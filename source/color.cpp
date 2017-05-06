#include "color.hpp"

Color::Color()       // Standardkonstruktor
  : farbe {0.0, 0.0, 0.0} // Memberinitialisierungsliste
  {}

Color::Color(float [3])
  : farbe {{[0] r_, [1] g_, [2] b_}}
{
  if (r_ < 0)
  {
    r_ = 0; //keine negativen Werte
    cout << "Bitte Farbbereich zwischen 0 und 1 wählen" << endl;
  }
  else if (r_ > 1)
  {
    r_ = r_/255;
    cout << "Bitte Farbbereich zwischen 0 und 1 wählen" << endl;
  }
  else if (r_ > 255)
  {
    r_ = 1;
    cout << "Bitte Farbbereich zwischen 0 und 1 wählen" << endl;
  }

}

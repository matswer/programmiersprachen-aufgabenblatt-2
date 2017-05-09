class Circle
{
      private:
      double radius; 
      
      public:
             Circle(); 
             Circle(double r); 
             ~Circle();
             void setradius(double r); 
             double getradius();
             double area();         //Konstruktor Fläche
             double circum();       //Konstruktor Umfang
             double diameter();     //Konstruktor Durchmesser
             
      };
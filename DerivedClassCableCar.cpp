#ifndef MUNIVEHICLE_H
#define MUNIVEHICLE_H

class MuniVehicle {
  protected:
    int totalFares;
  public:
    MuniVehicle()
    { totalFares = 0; }
    
    int getTotalFares()
    { return totalFares; }

    virtual void paidFare()
    { totalFares += 2; }

};  

class CableCar: MuniVehicle{
  protected:

  public:
    void paidFare()
      {totalFares += 7;}
};


#endif
//stonewt1.h -- revises definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};    //pounds per stone
        int stone;   //whole stones
        double pds_left;    //fractional pounds
        double pounds;  //entire weight in pounds
    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();  //default constructor
        ~Stonewt(); //destructor
        void show_lbs() const;
        void show_stn() const;

      //conversion functions
        operator int () const;  //转换函数，这里指出了转换类型（typename为int），因此不需要设置返回类型
        operator double() const;    //转换函数，这里指出了转换类型（typename为int），因此不需要设置返回类型
};


#endif

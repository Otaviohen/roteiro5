#ifndef DATA_H
#define DATA_H

class Data
{
    public:
        Data(int d, int m, int a);
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        int getDia();
        int getMes();
        int getAno();
        int avancaDia();

    protected:

    private:
        int dia;
        int mes;
        int ano;
};

#endif // DATA_H

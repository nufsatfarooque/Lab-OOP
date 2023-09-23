#ifndef COUNTER_H
#define COUNTER_H


class Counter
{
    public:
        Counter();
        Counter(int c);
        Counter(int c, int inc);
        ~Counter();

        int Getcounter() { return count; }
        void Setcounter(int val) { count = val; }

        void reset();
        void setIncrementStep(int step_val);
        void increment();
        Counter operator++();
        Counter operator + (const Counter c2) const;
        bool operator > (const Counter c2) const;
        bool operator < (const Counter c2) const;
        bool operator >= (const Counter c2) const;
        bool operator <= (const Counter c2) const;
        bool operator == (const Counter c2) const;
        bool operator != (const Counter c2) const;
        void operator + (const Counter c2) ;
        Counter operator += (const Counter c2) const;
        Counter operator ++(int);

    private:
        int count;
        int inc_step;
};

#endif // COUNTER_H






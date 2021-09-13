#ifndef ROAD_H
#define ROAD_h

class Road{
    public:
        Road();
        Road(int length);//Road(int);
        ~Road();
        void clear();
        void mark(int pos, char ch);
        int getLastBlock() const;
        char* toString() const;
    private:
        char* squares;
        int length;
};
#endif
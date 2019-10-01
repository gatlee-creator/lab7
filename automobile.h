#include <string>


class automobileType{
    public:
        void setProperties(float, float, float);
        std::string getInfoString() const;
        void drive(float);
        automobileType();
        automobileType(float, float, float);

    private:
        float odemeter;
        float fuel;
        float efficiency; 
};
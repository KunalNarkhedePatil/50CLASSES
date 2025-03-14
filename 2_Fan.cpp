#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::invalid_argument;
using std::string;
using std::vector;
class ProductDimension
{
private:
    float length;
    float width;
    float height;
    float weight_in_kg;

public:
    // Constructor
    ProductDimension(float _length, float _width, float _height, float _weight_in_kg)
    {
        if (_length <= 0.0)
        {
            throw invalid_argument("Length must be positive");
        }
        if (_width <= 0.0)
        {
            throw invalid_argument("Width must be positive");
        }
        if (_height <= 0.0)
        {
            throw invalid_argument("Height must be positive");
        }
        if (_weight_in_kg <= 0.0)
        {
            throw invalid_argument("Weight must be positive");
        }
        this->length = _length;
        this->width = _width;
        this->height = _height;
        this->weight_in_kg = _weight_in_kg;
    }

    // Getter Methods

    float getLength() const
    {
        return length;
    }

    float getWidth() const
    {
        return width;
    }

    float getHeight() const
    {
        return height;
    }

    float getWeightInKg() const
    {
        return weight_in_kg;
    }

    // Setter Methods

    void setLength(float newLength)
    {
        if (newLength <= 0.0)
        {
            throw invalid_argument("New Length must be positive");
        }

        this->length = newLength;
    }
    void setWidth(float newWidth)
    {
        if (newWidth <= 0.0)
        {
            throw invalid_argument("New Width must be positive");
        }
        this->width = newWidth;
    }

    void setWeight(float newWeight_in_kg)
    {
        if (newWeight_in_kg <= 0.0)
        {
            throw invalid_argument("New Weight must be positive");
        }
        this->weight_in_kg = newWeight_in_kg;
    }
};
class DateFirstAvailable
{
private:
    int day;
    int month;
    int year;

public:
    DateFirstAvailable(int _day, int _month, int _year)
    {
        if (_day <= 0 || _month <= 0 || _year <= 0)
        {
            throw invalid_argument("day,month, or year must be postive");
        }

        this->day = _day;
        this->month = _month;
        this->year = _year;
    }

    // Getters Methods

    int getDay() const
    {
        return day;
    }

    int getMonth() const
    {
        return month;
    }

    int getYear() const
    {
        return year;
    }

    // Setter Methods

    void setDay(int newDay)
    {
        if (newDay <= 0)
        {
            throw invalid_argument("newDay must be positive");
        }

        day = newDay;
    }

    void setMonth(int newMonth)
    {
        if (newMonth <= 0)
        {
            throw invalid_argument("newMonth must be positive");
        }
        month = newMonth;
    }

    void setYear(int newYear)
    {
        if (newYear <= 0)
        {
            throw invalid_argument("newYear must be positive");
        }

        year = newYear;
    }
};
class Fan
{
private:
    string brand;
    string colour;
    string electricDesign;
    string powerSource;
    string style;
    ProductDimension dimensions;
    vector<string> roomType;
    string feature;
    string mountingType;
    string controllerType;
    string material;
    int numberOfSpeed;
    int wattage;
    string finishType;
    int numberOfBlades;
    string airFlowCapacity;
    int speed;
    string switchType;
    vector<string> includedComponents;
    string modelName;
    string bladeMaterial;
    string manufacturer;
    string countryOfOrigin;
    string modelNumber;
    DateFirstAvailable dateFirstAvailable;
    string ASIN;

public:
    // constructor

    Fan(string _brand,
        string _colour,
        string _electricDesign,
        string _powerSource,
        string _style,
        ProductDimension _dimensions,
        vector<string> _roomType,
        string _feature,
        string _mountingType,
        string _controllerType,
        string _material,
        int _numberOfSpeed,
        int _wattage,
        string _finishType,
        int _numberOfBlades,
        string _airFlowCapacity,
        int _speed,
        string _switchType,
        vector<string> _includeComponents,
        string _modelName,
        string _bladeMaterial,
        string _manufacturer,
        string _countryOfOrigin,
        string _modelNumber,
        DateFirstAvailable _dateFirstAvailable,
        string _ASIN) : dimensions(_dimensions), dateFirstAvailable(_dateFirstAvailable)
    {

        if (_numberOfSpeed <= 0)
        {
            throw invalid_argument("_numberOfSpeed must be positive");
        }
        if (_wattage <= 0)
        {
            throw invalid_argument("_wattage must be positive");
        }
        if (_numberOfBlades <= 0)
        {
            throw invalid_argument("_numberOfBlades must be positive");
        }
        if (_speed <= 0)
        {
            throw invalid_argument("_speed must be positive");
        }
        this->brand = _brand;
        this->colour = _colour;
        this->electricDesign = _electricDesign;
        this->powerSource = _powerSource;
        this->style = _style;
        this->dimensions = _dimensions;
        this->roomType = _roomType;
        this->feature = _feature;
        this->mountingType = _mountingType;
        this->controllerType = _controllerType;
        this->material = _material;
        this->numberOfSpeed = _numberOfSpeed;
        this->wattage = _wattage;
        this->finishType = _finishType;
        this->numberOfBlades = _numberOfBlades;
        this->airFlowCapacity = _airFlowCapacity;
        this->speed = _speed;
        this->switchType = _switchType;
        this->includedComponents = _includeComponents;
        this->modelName = _modelName;
        this->bladeMaterial = _bladeMaterial;
        this->manufacturer = _manufacturer;
        this->countryOfOrigin = _countryOfOrigin;
        this->modelNumber = _modelNumber;
        this->dateFirstAvailable = _dateFirstAvailable;
        this->ASIN = _ASIN;
    }

    // Getter methods

    string getBrand() const
    {
        return brand;
    }
    string getColour() const
    {
        return colour;
    }
    string getElectricDesign() const
    {
        return electricDesign;
    }
    string getPowerSource() const
    {
        return powerSource;
    }

    string getStyle() const
    {
        return style;
    }

    ProductDimension getDimension() const
    {
        return dimensions;
    }
    const vector<string> &getRoomType() const
    {
        return roomType;
    }

    string getFeature() const
    {
        return feature;
    }

    string getMountingType() const
    {
        return mountingType;
    }

    string getControllerType() const
    {
        return controllerType;
    }

    string getMaterial() const
    {
        return material;
    }

    int getNumberOfSpeed() const
    {
        return numberOfSpeed;
    }

    int getWattage() const
    {
        return wattage;
    }

    string getFinishType() const
    {
        return finishType;
    }

    int getNumberOfBlades() const
    {
        return numberOfBlades;
    }

    string getAirFlowCapacity() const
    {
        return airFlowCapacity;
    }

    int getSpeed() const
    {
        return speed;
    }

    string getSwitchType() const
    {
        return switchType;
    }

    const vector<string> &getIncludedComponents() const
    {
        return includedComponents;
    }

    string getModelName() const
    {
        return modelName;
    }

    string getBladeMaterial() const
    {
        return bladeMaterial;
    }
    string getManufacturer() const
    {
        return manufacturer;
    }

    string getCountryOfOrigin() const
    {
        return countryOfOrigin;
    }

    string getModelNumber() const
    {
        return modelNumber;
    }

    DateFirstAvailable getDate() const
    {
        return dateFirstAvailable;
    }

    string getASIN() const
    {
        return ASIN;
    }

    // setter Methods

    void setBrand(string &newBrand)
    {
        brand = newBrand;
    }
    void setColour(string &newColour)
    {
        colour = newColour;
    }
    void setElectricDesign(string newElectricDesign)
    {
        electricDesign = newElectricDesign;
    }
    void setPowerSource(string &newPowerSource)
    {
        powerSource = newPowerSource;
    }
    void setStyle(string &newStyle)
    {
        style = newStyle;
    }
    void setDemensions(ProductDimension &newDimensions)
    {
        dimensions = newDimensions;
    }

    void setRoomType(vector<string> &newRoomType)
    {
        roomType = newRoomType;
        // roomType.clear();
        // for(vector<string>::iterator iter=newRoomType.begin();iter!=newRoomType.end();++iter)
        // {
        //      roomType.push_back(*iter);
        // }
    }
    void setFeature(string &newFeature)
    {
        feature = newFeature;
    }
    void setMountingType(string &newMountingType)
    {
        mountingType = newMountingType;
    }
    void setControllerType(string &newControllerType)
    {
        controllerType = newControllerType;
    }
    void setMaterial(string &newMaterial)
    {
        material = newMaterial;
    }
    void setNumberOfSpeed(int newNumberOfSpeed)
    {
        if (newNumberOfSpeed <= 1)
        {
            throw invalid_argument("newNumberOfSpeed must be positive");
        }
        numberOfSpeed = newNumberOfSpeed;
    }
    void setWattage(int newWattage)
    {
        if (newWattage <= 0)
        {
            throw invalid_argument("newWattage must be positive");
        }

        wattage = newWattage;
    }

    void setFinishType(string &newFinishType)
    {
        finishType = newFinishType;
    }

    void setNumberOfBlades(int newNumberOfBlades)
    {
        if (newNumberOfBlades <= 0)
        {
            throw invalid_argument("newNumberOfBlades must be positive");
        }
        numberOfBlades = newNumberOfBlades;
    }
    void setAirFlowCapacity(string &newAirFlowCapacity)
    {
        airFlowCapacity = newAirFlowCapacity;
    }
    void setSpeed(int newSpeed)
    {
        if (newSpeed <= 0)
        {
            throw invalid_argument("newSpeed must be positive");
        }
        speed = newSpeed;
    }
    void setSwitchType(string &newSwitchType)
    {
        switchType = newSwitchType;
    }
    void setIncludedComponent(vector<string> &newIncludedComponents)
    {
        includedComponents = newIncludedComponents;
        // includedComponents.clear();
        // for(vector<string>::iterator iter=newIncludedComponents.begin();iter!=newIncludedComponents.end();++iter)
        // {
        //     includedComponents.push_back(*iter);
        // }
    }
    void setModelName(string &newModelName)
    {
        modelName = newModelName;
    }
    void setBladeMaterial(string &newBladeMaterial)
    {
        bladeMaterial = newBladeMaterial;
    }
    void setManufacturer(string &newManufacturer)
    {
        manufacturer = newManufacturer;
    }
    void setCountryOfOrigin(string &newCountryOfOrigin)
    {
        countryOfOrigin = newCountryOfOrigin;
    }
    void setModelNumber(string &newModelNumber)
    {
        modelNumber = newModelNumber;
    }
    void setDate(DateFirstAvailable &newDate)
    {
        dateFirstAvailable = newDate;
    }
    void setASIN(string &newASIN)
    {
        ASIN = newASIN;
    }

    void DisplayDetails()
    {
        cout << " FAN PRODUCT DETAILS" << endl;

        cout << "Brand :" << this->getBrand() << endl;
        cout << "Colour :" << this->getColour() << endl;
        cout << "ElectricDesign :" << this->getElectricDesign() << endl;
        cout << "PowerSource :" << this->getPowerSource() << endl;
        cout << "Style :" << this->getStyle() << endl;
        cout << "dimensions :" << this->getDimension().getLength()
             << "/" << this->getDimension().getWidth()
             << "/" << this->getDimension().getHeight() << endl;
        cout << "Weight :" << getDimension().getWeightInKg() << " Kg" << endl;
        cout << "roomType :";
        const vector<string> &roomTypes = this->getRoomType();

        for (vector<string>::const_iterator iter = roomType.begin(); iter != roomType.end(); ++iter)
        {
            cout << *iter << ",";
        }

        cout << endl;
        cout << "Feature :" << this->getFeature() << endl;
        cout << "Mounting Type :" << this->getMountingType() << endl;
        cout << "Controller Type :" << this->getControllerType() << endl;
        cout << "Material :" << this->getMaterial() << endl;
        cout << "Number Of Speed :" << getNumberOfSpeed() << endl;
        cout << "Wattage :" << getWattage() << endl;
        cout << "FinishType :" << getFinishType() << endl;
        cout << "Number Of Blades :" << getNumberOfBlades() << endl;
        cout << "Air Flow Capacity :" << getAirFlowCapacity() << endl;
        cout << "Speed :" << getSpeed() << endl;
        cout << "Switch Type :" << getSwitchType() << endl;
        cout << "Included Components :";
        cout << "Included Components: ";
        const vector<string> &IncludedComponents = this->getIncludedComponents();
        for (vector<string>::const_iterator iter = getIncludedComponents().begin(); iter != getIncludedComponents().end(); ++iter)
        {
            cout << *iter << ",";
        }
        cout << endl;
        cout << "Model Name :" << getModelName() << endl;
        cout << "BladeMaterial :" << getBladeMaterial() << endl;
        cout << "Manufacturer :" << getManufacturer() << endl;
        cout << "Country Of Origin :" << getCountryOfOrigin() << endl;
        cout << "Model Number :" << getModelNumber() << endl;
        cout << "Date Of First Available: " << this->getDate().getDay() << "/" << this->getDate().getMonth() << "/" << getDate().getYear() << endl;
        cout << "ASIN :" << getASIN() << endl;
    }
};
int main(void)
{
    ProductDimension prodDimension(54.5, 25.5, 19.4, 3.4);
    DateFirstAvailable date(1, 1, 2023);
    vector<string> roomType{string("Living Room"),
                            string("Bedroom"),
                            string("Daning Room")};
    vector<string> includedComponents{string("Fan motor"),
                                      string("Balanced blade set"),
                                      string("downrod"),
                                      string("canopies"),
                                      string("safety cable and shackle kit assembly")};

    Fan fobj("Crompton", "Lustre Brown", "Ceiling Fan", "Electricity", "Sea Sapphira(1 Star Rated)", prodDimension, roomType,
             "High Velocity", "downrod mount", "Regulator Control", "Aluminium", 3, 51,
             "Power Coated", 3, "210 Cubic Matres Minute", 380, "Push Button", includedComponents, "CROMPTON SUREBREEZE SEA", "CRCA",
             "Seiko", "India", "CFSBSSP48LB1S", date, "B0BTS9GG2V");

    fobj.DisplayDetails();

    return 0;
}

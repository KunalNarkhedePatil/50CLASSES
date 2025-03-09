#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::invalid_argument;
using std::string;

class ProductDimension
{
private:
    float length;
    float width;
    float height;
    float weight_in_gm;

public:
    // Constructor

    ProductDimension(float _length, float _width, float _height, float _weight_in_gms)
    {
        if (_length <= 0.0)
        {
            throw invalid_argument("Lenght must be positive");
        }
        if (_width <= 0.0)
        {
            throw invalid_argument("Width must be positive");
        }
        if (_height <= 0.0)
        {
            throw invalid_argument("Height must be positive");
        }
        if (_weight_in_gms <= 0.0)
        {
            throw invalid_argument("Weight must be positive");
        }
        this->length = _length;
        this->width = _width;
        this->height = _height;
        this->weight_in_gm = _weight_in_gms;
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
    float getWeightInGm() const
    {
        return weight_in_gm;
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

    void setHeight(float newHeight)
    {
        if (newHeight <= 0.0)
        {
            throw invalid_argument("New Height must be positive");
        }
        height = newHeight;
    }

    void setWeightInGm(float newWeight_in_gm)
    {
        if (newWeight_in_gm <= 0.0)
        {
            throw invalid_argument("New Weight must be positive");
        }

        weight_in_gm = newWeight_in_gm;
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
        if (_day <= 0 || _month <= 0.0 || _year <= 0.0)
        {
            throw invalid_argument("day,month,or year must be positive");
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
class Bag
{
private:
    string colour;
    string modelNumber;
    ProductDimension dimensions;
    string primaryMaterial;
    string capacity;
    int volumeCapacity;
    string warrantyDescription;
    string shape;
    string manufacturer;
    string ASIN;
    string countryOfOrigin;
    float customerReviews;
    string bestSellerRank;
    DateFirstAvailable dateFirstAvailable;
    string genericName;

public:
    // constructor

    Bag(string _colour, string _modelNumber, ProductDimension _dimensions,
        string _primaryMaterial, string _capacity, int _volumeCapacity, string _warrantyDiscription,
        string _shape, string _manufacturer, string _ASIN, string _countryOfOrigin, float _customerReviews, string _bestSellerRank,
        DateFirstAvailable _dateFirstAvailable, string _genericName) : dimensions(_dimensions), dateFirstAvailable(_dateFirstAvailable)
    {
        if (_volumeCapacity <= 0)
        {
            throw invalid_argument("volumeCapacity must be positive");
        }

        if (_customerReviews <= 0.0)
        {
            throw invalid_argument("customer Reviews must be positive");
        }

        this->colour = _colour;
        this->modelNumber = _modelNumber;
        this->dimensions = _dimensions;
        this->primaryMaterial = _primaryMaterial;
        this->capacity = _capacity;
        this->volumeCapacity = _volumeCapacity;
        this->warrantyDescription = _warrantyDiscription;
        this->shape = _shape;
        this->manufacturer = _manufacturer;
        this->ASIN = _ASIN;
        this->countryOfOrigin = _countryOfOrigin;
        this->customerReviews = _customerReviews;
        this->dateFirstAvailable = _dateFirstAvailable;
        this->genericName = _genericName;
    }

public:
    string getColour() const
    {
        return colour;
    }
    string getModelNumber() const
    {
        return modelNumber;
    }
    ProductDimension getDimensions() const
    {
        return dimensions;
    }

    string getPrimaryMaterial() const
    {
        return primaryMaterial;
    }

    string getCapacity() const
    {
        return capacity;
    }

    int getVolumeCapacity() const
    {
        return volumeCapacity;
    }

    string getWarrantyDescription() const
    {
        return warrantyDescription;
    }

    string getShape() const
    {
        return shape;
    }

    string getManufacturer() const
    {
        return manufacturer;
    }

    string getASIN() const
    {
        return ASIN;
    }

    string getCountryOfOrigin() const
    {
        return countryOfOrigin;
    }

    float getCustomerReviews() const
    {
        return customerReviews;
    }

    string getBestSellerRank() const
    {
        return bestSellerRank;
    }

    DateFirstAvailable getDateFirstAvailable() const
    {
        return dateFirstAvailable;
    }

    string getGenericName() const
    {
        return genericName;
    }

    // Setter methods

    void setColour(const string &newColour)
    {
        colour = newColour;
    }
    void setModelNumber(const string &newModelNumber)
    {
        modelNumber = newModelNumber;
    }

    void setDimension(const ProductDimension &newDimensions)
    {
        dimensions = newDimensions;
    }
    void setPrimaryMaterial(const string &newPrimaryMaterial)
    {
        primaryMaterial = newPrimaryMaterial;
    }
    void setCapacity(const string &newCapacity)
    {
        capacity = newCapacity;
    }

    void setVolumeCapacity(int newVolumeCapacity)
    {
        if (newVolumeCapacity <= 0)
        {
            throw invalid_argument("New Valume Capacity must be positive");
        }
        volumeCapacity = newVolumeCapacity;
    }

    void SetWarrantyDescription(const string &newWarrantyDescription)
    {
        warrantyDescription = newWarrantyDescription;
    }

    void setShape(const string &newShape)
    {
        shape = newShape;
    }
    void setManufacturer(const string &newManufacturer)
    {
        manufacturer = newManufacturer;
    }
    void setASIN(const string &newASIN)
    {
        ASIN = newASIN;
    }
    void setCountryOfOrigin(const string &newCountryOfOrigin)
    {
        countryOfOrigin = newCountryOfOrigin;
    }
    void setCustomerReviews(float newCustomerReviews)
    {
        if (newCustomerReviews <= 0.0)
        {
            throw invalid_argument("New Customer Reviews must be positive");
        }
        customerReviews = newCustomerReviews;
    }

    void setBestSellerRank(const string &newBsetSellerRank)
    {
        bestSellerRank = newBsetSellerRank;
    }
    void setDateFirstAvailable(DateFirstAvailable &newDate)
    {
        dateFirstAvailable = newDate;
    }
    void setGenericName(const string &newGenericName)
    {
        genericName = newGenericName;
    }
};

int main(void)
{
    ProductDimension prodDim(12.5f, 8.0f, 5.5f, 1500.0f);
    DateFirstAvailable date(1, 1, 2023);

    Bag bobj("Black", "BG12345", prodDim, "Nylon", "Medium", 20,
             "2 year", "ReacAngle", "XYZ corp", "B00123456", "India", 4.5, "#1 in Bags", date, "Traval Bag");

    cout << "Bag Colour:" << bobj.getColour() << endl;
    cout << "Bag ModelNumber:" << bobj.getModelNumber() << endl;
    cout << "Bag Dimensions(L*W*H):"
         << bobj.getDimensions().getLength() << "x"
         << bobj.getDimensions().getWidth() << "x"
         << bobj.getDimensions().getHeight() << endl;
    cout << "Bag Weight in gms:" << bobj.getDimensions().getWeightInGm() << endl;
    cout << "Bag Primary Material:" << bobj.getPrimaryMaterial() << endl;
    cout << "Bag Capacity:" << bobj.getCapacity() << endl;
    cout << "Bag Volume Capacity:" << bobj.getCapacity() << endl;
    cout << "Bag Warranty Description:" << bobj.getWarrantyDescription() << endl;
    cout << "Bag Shape:" << bobj.getShape() << endl;
    cout << "Bag Manufacturer:" << bobj.getManufacturer() << endl;
    cout << "Bag ASIN Number:" << bobj.getASIN() << endl;
    cout << "Bag Country Of Origin:" << bobj.getCountryOfOrigin() << endl;
    cout << "Customer Reviews:" << bobj.getCustomerReviews() << endl;
    cout << "Best Seller Rank:" << bobj.getBestSellerRank() << endl;
    cout << "Date of First Available:" << bobj.getDateFirstAvailable().getDay()
         << "/" << bobj.getDateFirstAvailable().getMonth()
         << "/" << bobj.getDateFirstAvailable().getYear() << endl;
    cout << "Bag Generic Name:" << bobj.getGenericName() << endl;

    return 0;
}

/*
Brand: Boat
Model Name: Rockerz 255 Pro+
Manufacturer: Imagine Marketing Ltd, Boat
Connectivity Technology: Bluetooth 5.0
Battery Life: 60 Hours
Charging Time: 1.5 Hours
Water Resistance Level: IPX7 (Water Resistant)
Frequency Response: 20Hz - 20kHz
Audio Driver Type: Dynamic Driver
Audio Driver Size: 10 Millimeters
Earpiece Shape: Bud
Control Type: Voice Control
Control Method: Touch
Microphone Format: 1
Bluetooth Range: 10 Metres
Special Features: Voice Assistant, ASAP Charge, Dual Pairing
Compatible Devices: Bluetooth Devices
Batteries Included: True
Batteries Required: True
ASIN: B08TV2P1N8
Customer Reviews: 4.0
Date First Available: 1 December 2024
Country of Origin: China
Product Dimensions: 1 x 1 x 45 cm; 30 g
*/

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::invalid_argument;
using std::string;
using std::vector;
class ProductDimension
{
private:
    float fLengthInCm;
    float fWidthInCm;
    float fHeightInCm;
    float fWeightInGm;

public:
    // Constructor with initialization list

    ProductDimension(float _length, float _width, float _height, float _weight_in_gm) : fLengthInCm(_length), fWidthInCm(_width), fHeightInCm(_height), fWeightInGm(_weight_in_gm)
    {
        if (_length <= 0)
            throw invalid_argument("Length must be positive");
        if (_width <= 0.0)
            throw invalid_argument("Width must be positive");
        if (_height <= 0.0)
            throw invalid_argument("Height must be positive");
        if (_weight_in_gm <= 0.0)
            throw invalid_argument("Weight must be positive");
    }

    // Getter Methods

    float getLength() const
    {
        return fLengthInCm;
    }
    float getWidth() const
    {
        return fWidthInCm;
    }
    float getHeight() const
    {
        return fHeightInCm;
    }
    float getWeight_in_gm() const
    {
        return fWeightInGm;
    }

    // Setter Methods

    void setLength(float newLength)
    {
        if (newLength <= 0.0)
            throw invalid_argument("newLength must be positive");
        fLengthInCm = newLength;
    }
    void setWidth(float newWidth)
    {
        if (newWidth <= 0.0)
            throw invalid_argument("newWidth must be positive");
        fWidthInCm = newWidth;
    }
    void setHeight(float newHeight)
    {
        if (newHeight <= 0.0)
            throw invalid_argument("newHeight must be positive");
        fHeightInCm = newHeight;
    }
    void setWeight(float newWeight)
    {
        if (newWeight <= 0.0)
            throw invalid_argument("newWeight must be positive");
        fWeightInGm = newWeight;
    }
};
class Date
{
private:
    int iDay;
    int iMonth;
    int iYear;

public:
    // Constructor with initialization list

    Date(int _day, int _month, int _year) : iDay(_day), iMonth(_month), iYear(_year)
    {
        if (_day <= 0)
            throw invalid_argument("day must be positive");
        if (_month <= 0)
            throw invalid_argument("month must be positive");
        if (_year <= 0)
            throw invalid_argument("Year must be positive");
    }

    // Getter Methods

    int getDay() const
    {
        return iDay;
    }
    int getMonth() const
    {
        return iMonth;
    }
    int getYear() const
    {
        return iYear;
    }

    // Setter Methods

    void setDay(int newDay)
    {
        if (newDay <= 0)
            throw invalid_argument("newDay must be positive");
        iDay = newDay;
    }
    void setMonth(int newMonth)
    {
        if (newMonth <= 0)
            throw invalid_argument("newMonth must be positive");
        iMonth = newMonth;
    }
    void setYear(int newYear)
    {
        if (newYear <= 0)
            throw invalid_argument("newYear must be positive");
        iYear = newYear;
    }
};
class Earphone
{
private:
    string strBrand;
    string strModelName;
    string strManufacturer;
    string strConnectivityTechnology;
    int iBatteryLifeInHrs;
    float fChargingTimeInHrs;
    string strWaterResistanceLevel;
    string strFrequencyResponse;
    string strAudioDriverType;
    int iAudioDriverSizeInMm;
    string strEarphonepieceShape;
    string strControlType;
    int iMicrophoneFormat;
    int iBluetoothRangeInMr;
    vector<string> vecSpecialFeatures;
    string strCompatibleDevices;
    bool bBatteriesIncluded;
    bool bBatteriesRequired;
    string strASIN;
    float fCustomerReviews;
    Date dtDateFirstAvailable;
    string strCountryOfOrigin;
    ProductDimension dmProductDimension;

    // Constructor with initialization list

    Earphone(string _strBrand, string _strModelName, string _strManufacturer, string _strConnectivityTechnology, int _iBatteryLifeInHrs,
             float _fChargingTimeInHrs, string _strWaterResistanceLevel, string _strFrequencyResponse, string _strAudioDriverType, int _iAudioDriverSizeInMm,
             string _strEarphonepieceShape, string _strControlType, int _iMicrophoneFormat, int _iBluetoothRangeInMeters, vector<string> _vecSpecialFeatures,
             string _strCompatibleDevices, bool _bBatteriesIncluded, bool _bBatteriesRequired, string _strASIN, float _fCustomerReviews, Date _dtDateFirstAvailable,
             string _strCountryOfOrigin, ProductDimension _dmProductDimension) : strBrand(_strBrand), strModelName(_strModelName), strManufacturer(_strManufacturer), strConnectivityTechnology(_strConnectivityTechnology),
                                                                                 iBatteryLifeInHrs(_iBatteryLifeInHrs), fChargingTimeInHrs(_fChargingTimeInHrs), strWaterResistanceLevel(_strWaterResistanceLevel),
                                                                                 strFrequencyResponse(_strFrequencyResponse), strAudioDriverType(_strAudioDriverType), iAudioDriverSizeInMm(_iAudioDriverSizeInMm), strEarphonepieceShape(_strEarphonepieceShape),
                                                                                 strControlType(_strControlType), iMicrophoneFormat(_iMicrophoneFormat), iBluetoothRangeInMr(_iBluetoothRangeInMeters),
                                                                                 vecSpecialFeatures(_vecSpecialFeatures), strCompatibleDevices(_strCompatibleDevices), bBatteriesIncluded(_bBatteriesIncluded), bBatteriesRequired(_bBatteriesRequired),
                                                                                 strASIN(_strASIN), fCustomerReviews(_fCustomerReviews), dtDateFirstAvailable(_dtDateFirstAvailable), strCountryOfOrigin(_strCountryOfOrigin), dmProductDimension(_dmProductDimension)

    {
        if (iBatteryLifeInHrs <= 0)
            throw invalid_argument("iBatteryLifeInHrs must be positive");
        if (fChargingTimeInHrs <= 0.0)
            throw invalid_argument("fChargingTimeInHrs must be positive");
        if (iAudioDriverSizeInMm <= 0)
            throw invalid_argument("iAudioDriverSizeInMm must be posotive");
        if (iMicrophoneFormat <= 0)
            throw invalid_argument("iMicrophoneFormat must be positive");
        if (iBluetoothRangeInMr <= 0)
            throw invalid_argument("iBluetoothRangeInMeters must be positive");
        if (fCustomerReviews <= 0.0)
            throw invalid_argument("fCustomerReviews must be positive");
    }
    // Getter Methods

    string getBrand() const
    {
        return strBrand;
    }
    string getModelName() const
    {
        return strModelName;
    }
    string getManufacturer() const
    {
        return strManufacturer;
    }
    string getConnectivityTechnology() const
    {
        return strConnectivityTechnology;
    }
    int getBatteryLifeInHrs() const
    {
        return iBatteryLifeInHrs;
    }
    float getChargingTimeInHrs() const
    {
        return fChargingTimeInHrs;
    }
    string getWaterResistanceLevel() const
    {
        return strWaterResistanceLevel;
    }
    string getFrequencyResponse() const
    {
        return strFrequencyResponse;
    }
    int getAudioDriverSizeInMm() const
    {
        return iAudioDriverSizeInMm;
    }
    string getEarphonepieceShape() const
    {
        return strEarphonepieceShape;
    }
    string getControlType() const
    {
        return strControlType;
    }
    int getMicrophoneFormat() const
    {
        return iMicrophoneFormat;
    }
    int getBluetoothRangeInMr() const
    {
        return iBluetoothRangeInMr;
    }
    const vector<string> &getSepecialFeatures() const
    {
        return vecSpecialFeatures;
    }
    string getCompatibleDevices() const
    {
        return strCompatibleDevices;
    }
    bool getBatteriesIncluded() const
    {
        return bBatteriesIncluded;
    }
    bool getBatteriesRequired() const
    {
        return bBatteriesRequired;
    }
    string getASIN() const
    {
        return strASIN;
    }
    float getCustomerReviews() const
    {
        return fCustomerReviews;
    }
    Date getDateFirstAvailable() const
    {
        return dtDateFirstAvailable;
    }
    string getCountryOfOrigin() const
    {
        return strCountryOfOrigin;
    }
    ProductDimension getDimensions() const
    {
        return dmProductDimension;
    }
};
int main()
{
    ProductDimension(1.0, 1.0, 45.0, 30.0);
    Date(1, 3, 2024);
    // Earphone obj("Boat","Rockerz 255 Pro+",)

    return 0;
}
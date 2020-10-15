#pragma once

class Crypt {
private:
    bool _isEncrypted
    std::string _encryptedData;
    std::string _decryptedData;

    std::string _outData;
public:
    Crypt(std::string input, bool isEncrypted);

    bool decrypt(std::string options);
    bool encrypt(std::string options);

    // Setters
    void setIsEncrypted(bool isEncrypted);
    void setEncryptedData(std::string data);
    void setDecryptedData(std::string data);
    // Getters
    bool getIsEncrypted();
    std::string getEncryptedData();
    std::string getDecryptedData();
    std::string getOutData();
};
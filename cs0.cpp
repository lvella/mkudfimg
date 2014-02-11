#include <vector>
#include <inttypes.h>

class CS0
{
public:
    CS0() = default;
    CS0(const str::string &from)
    {
        from_utf8(from);
    }

    void from_utf8(const std::string &from)
    {
        
    }

private:
    uint8_t copression_id;
    std::vector<uint8_t> bitstream;
};

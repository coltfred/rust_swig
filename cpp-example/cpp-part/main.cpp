#include "UserId.hpp"
#include <cstdlib>
#include <iostream>
#include "DocumentListMeta.hpp"
#include "DocumentMetadataResult.hpp"
#include "IronOxide_fwd.hpp"
#include "IronOxide.hpp"
using namespace rust;

void encrypt_decrypt_roundtrip(void)
{
    auto s = boost::string_view(
        "{\"accountId\":\"abcABC012_.$#|@/"
        ":;=+'-91e078f0-a60c-4251-8652-dd498c07a8f4\",\"segmentId\":1825,\"signingPrivateKey\":"
        "\"uKHa70uwLVG3IU7XodT2kla/PuC/En8PkRCjMMc9ZE7HFrOV+g0vOwATp/CiXp65mVas0K6TSl/"
        "RaxDGlcmsnA==\",\"devicePrivateKey\":\"YZRlDSkM+JxxSXCtWCVK693qfhNqcbhaPrtHs92uD4w=\"}");
    auto d = DeviceContext::fromJsonString(s);
    // IronOxide sdk = unwrap(IronOxide::initialize(d, IronOxideConfig()));
    // auto foo = unwrap(sdk.documentEncrypt(string_to_slice("foo"), DocumentEncryptOpts()));
}

int main()
{
    encrypt_decrypt_roundtrip();
    return EXIT_SUCCESS;
}

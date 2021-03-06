#include "mtx/events/encryption.hpp"

#include <nlohmann/json.hpp>

namespace mtx {
namespace events {
namespace state {

void
from_json(const nlohmann::json &obj, Encryption &encryption)
{
        encryption.algorithm = obj.at("algorithm").get<std::string>();
}

void
to_json(nlohmann::json &obj, const Encryption &encryption)
{
        obj["algorithm"] = encryption.algorithm;
}

} // namespace state
} // namespace events
} // namespace mtx

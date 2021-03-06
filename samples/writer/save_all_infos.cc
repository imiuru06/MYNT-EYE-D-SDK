#include "device_writer.h"

MYNTEYE_USE_NAMESPACE

int main(int argc, char *argv[]) {
  std::string dir{"config"};
  if (argc >= 2) {
    dir = argv[1];
  }

  auto &&device = std::make_shared<Camera>();
  auto &&descs = device->GetDescriptors();
  if (!descs) {
    std::cerr << "\nDevice was not supported to get infos." << std::endl;
    return 1;
  }

  auto sn = descs->serial_number;
  dir.append(MYNTEYE_OS_SEP "SN").append(sn);

  tools::DeviceWriter writer(device);
  writer.SaveAllDatas(dir);

  return 0;
}

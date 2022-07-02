#pragma once
#include <vector>
#include <photo.h>

class PhotoManager
{
private:
  std::vector<PhotoInfo> photos_;
public:
  explicit PhotoManager() = default;
  void Proc();
  void Shutdown();
  void Restart();

  auto CreatePhoto(int user_id);
  auto GetPhoto(int user_id);
  auto UpdatePhoto();
};

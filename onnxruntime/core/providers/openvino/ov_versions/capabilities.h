// Copyright (C) 2019-2022 Intel Corporation
// Licensed under the MIT License

#pragma once
#include <vector>
#include <string>
#include <memory>
#include "data_ops.h"

namespace onnxruntime {
namespace openvino_ep {

class GetCapability {
 private:
  const GraphViewer& graph_viewer_;
  std::string device_type_;
  DataOps* data_ops_;

 public:
  GetCapability(const GraphViewer& graph_viewer_param, std::string device_type_param, const std::string version_param);
  virtual std::vector<std::unique_ptr<ComputeCapability>> Execute();
};

}  // namespace openvino_ep
}  // namespace onnxruntime

#include <caffe/caffe.hpp>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/text_format.h>
#include <algorithm>
#include <iosfwd>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <iostream>
#include "caffe/common.hpp"
#include "caffe/proto/caffe.pb.h"
#include "caffe/util/io.hpp"

using namespace caffe;
using namespace std;
using google::protobuf::io::FileInputStream;
using google::protobuf::io::FileOutputStream;
using google::protobuf::io::ZeroCopyInputStream;
using google::protobuf::io::CodedInputStream;
using google::protobuf::io::ZeroCopyOutputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::Message;

int main(int argc,char *argv[])
{
  if (argc != 3) {      //pass three arguments to main,if not, print an error message
    cout << "usage: ./run /path/to/modle/file_name /output/path/file_name" << endl;
    return 1; 
  }
  NetParameter proto;
  ReadProtoFromBinaryFile(argv[1], &proto);
  WriteProtoToTextFile(proto, argv[2]);
  return 0;
}


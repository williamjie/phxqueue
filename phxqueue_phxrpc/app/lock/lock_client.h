/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* lock_client.h

 Generated by phxrpc_pb2client from lock.proto

*/

#pragma once

#include "phxqueue/comm.h"
#include "phxrpc/rpc.h"

#include "lock.pb.h"


class LockClient {
  public:
    static bool Init(const char *config_file);

    static const char *GetPackageName();

    LockClient();
    virtual ~LockClient();

    int PhxEcho(const google::protobuf::StringValue &req,
                google::protobuf::StringValue *resp);

    int PhxBatchEcho(const google::protobuf::StringValue &req,
                     google::protobuf::StringValue *resp);

    int GetLockInfo(const phxqueue::comm::proto::GetLockInfoRequest &req,
                    phxqueue::comm::proto::GetLockInfoResponse *resp);

    int AcquireLock(const phxqueue::comm::proto::AcquireLockRequest &req,
                    phxqueue::comm::proto::AcquireLockResponse *resp);

    phxqueue::comm::RetCode
    ProtoGetLockInfo(const phxqueue::comm::proto::GetLockInfoRequest &req,
                     phxqueue::comm::proto::GetLockInfoResponse &resp);

    phxqueue::comm::RetCode
    ProtoAcquireLock(const phxqueue::comm::proto::AcquireLockRequest &req,
                     phxqueue::comm::proto::AcquireLockResponse &resp);
};


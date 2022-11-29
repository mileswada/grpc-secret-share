// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: stringreverse.proto

#include "stringreverse.pb.h"
#include "stringreverse.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace stringreverse {

static const char* StringReverse_method_names[] = {
  "/stringreverse.StringReverse/sendRequest",
};

std::unique_ptr< StringReverse::Stub> StringReverse::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StringReverse::Stub> stub(new StringReverse::Stub(channel, options));
  return stub;
}

StringReverse::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_sendRequest_(StringReverse_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status StringReverse::Stub::sendRequest(::grpc::ClientContext* context, const ::stringreverse::StringRequest& request, ::stringreverse::StringReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::stringreverse::StringRequest, ::stringreverse::StringReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_sendRequest_, context, request, response);
}

void StringReverse::Stub::async::sendRequest(::grpc::ClientContext* context, const ::stringreverse::StringRequest* request, ::stringreverse::StringReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::stringreverse::StringRequest, ::stringreverse::StringReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_sendRequest_, context, request, response, std::move(f));
}

void StringReverse::Stub::async::sendRequest(::grpc::ClientContext* context, const ::stringreverse::StringRequest* request, ::stringreverse::StringReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_sendRequest_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::stringreverse::StringReply>* StringReverse::Stub::PrepareAsyncsendRequestRaw(::grpc::ClientContext* context, const ::stringreverse::StringRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::stringreverse::StringReply, ::stringreverse::StringRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_sendRequest_, context, request);
}

::grpc::ClientAsyncResponseReader< ::stringreverse::StringReply>* StringReverse::Stub::AsyncsendRequestRaw(::grpc::ClientContext* context, const ::stringreverse::StringRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsendRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

StringReverse::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StringReverse_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< StringReverse::Service, ::stringreverse::StringRequest, ::stringreverse::StringReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](StringReverse::Service* service,
             ::grpc::ServerContext* ctx,
             const ::stringreverse::StringRequest* req,
             ::stringreverse::StringReply* resp) {
               return service->sendRequest(ctx, req, resp);
             }, this)));
}

StringReverse::Service::~Service() {
}

::grpc::Status StringReverse::Service::sendRequest(::grpc::ServerContext* context, const ::stringreverse::StringRequest* request, ::stringreverse::StringReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace stringreverse

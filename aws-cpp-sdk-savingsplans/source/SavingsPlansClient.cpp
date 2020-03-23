﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/savingsplans/SavingsPlansClient.h>
#include <aws/savingsplans/SavingsPlansEndpoint.h>
#include <aws/savingsplans/SavingsPlansErrorMarshaller.h>
#include <aws/savingsplans/model/CreateSavingsPlanRequest.h>
#include <aws/savingsplans/model/DescribeSavingsPlanRatesRequest.h>
#include <aws/savingsplans/model/DescribeSavingsPlansRequest.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingRatesRequest.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingsRequest.h>
#include <aws/savingsplans/model/ListTagsForResourceRequest.h>
#include <aws/savingsplans/model/TagResourceRequest.h>
#include <aws/savingsplans/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SavingsPlans;
using namespace Aws::SavingsPlans::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "savingsplans";
static const char* ALLOCATION_TAG = "SavingsPlansClient";


SavingsPlansClient::SavingsPlansClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SavingsPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SavingsPlansClient::SavingsPlansClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SavingsPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SavingsPlansClient::SavingsPlansClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SavingsPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SavingsPlansClient::~SavingsPlansClient()
{
}

void SavingsPlansClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SavingsPlansEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SavingsPlansClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateSavingsPlanOutcome SavingsPlansClient::CreateSavingsPlan(const CreateSavingsPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/CreateSavingsPlan";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSavingsPlanOutcome(CreateSavingsPlanResult(outcome.GetResult()));
  }
  else
  {
    return CreateSavingsPlanOutcome(outcome.GetError());
  }
}

CreateSavingsPlanOutcomeCallable SavingsPlansClient::CreateSavingsPlanCallable(const CreateSavingsPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSavingsPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSavingsPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SavingsPlansClient::CreateSavingsPlanAsync(const CreateSavingsPlanRequest& request, const CreateSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSavingsPlanAsyncHelper( request, handler, context ); } );
}

void SavingsPlansClient::CreateSavingsPlanAsyncHelper(const CreateSavingsPlanRequest& request, const CreateSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSavingsPlan(request), context);
}

DescribeSavingsPlanRatesOutcome SavingsPlansClient::DescribeSavingsPlanRates(const DescribeSavingsPlanRatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeSavingsPlanRates";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSavingsPlanRatesOutcome(DescribeSavingsPlanRatesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSavingsPlanRatesOutcome(outcome.GetError());
  }
}

DescribeSavingsPlanRatesOutcomeCallable SavingsPlansClient::DescribeSavingsPlanRatesCallable(const DescribeSavingsPlanRatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSavingsPlanRatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSavingsPlanRates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SavingsPlansClient::DescribeSavingsPlanRatesAsync(const DescribeSavingsPlanRatesRequest& request, const DescribeSavingsPlanRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSavingsPlanRatesAsyncHelper( request, handler, context ); } );
}

void SavingsPlansClient::DescribeSavingsPlanRatesAsyncHelper(const DescribeSavingsPlanRatesRequest& request, const DescribeSavingsPlanRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSavingsPlanRates(request), context);
}

DescribeSavingsPlansOutcome SavingsPlansClient::DescribeSavingsPlans(const DescribeSavingsPlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeSavingsPlans";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSavingsPlansOutcome(DescribeSavingsPlansResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSavingsPlansOutcome(outcome.GetError());
  }
}

DescribeSavingsPlansOutcomeCallable SavingsPlansClient::DescribeSavingsPlansCallable(const DescribeSavingsPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSavingsPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSavingsPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SavingsPlansClient::DescribeSavingsPlansAsync(const DescribeSavingsPlansRequest& request, const DescribeSavingsPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSavingsPlansAsyncHelper( request, handler, context ); } );
}

void SavingsPlansClient::DescribeSavingsPlansAsyncHelper(const DescribeSavingsPlansRequest& request, const DescribeSavingsPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSavingsPlans(request), context);
}

DescribeSavingsPlansOfferingRatesOutcome SavingsPlansClient::DescribeSavingsPlansOfferingRates(const DescribeSavingsPlansOfferingRatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeSavingsPlansOfferingRates";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSavingsPlansOfferingRatesOutcome(DescribeSavingsPlansOfferingRatesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSavingsPlansOfferingRatesOutcome(outcome.GetError());
  }
}

DescribeSavingsPlansOfferingRatesOutcomeCallable SavingsPlansClient::DescribeSavingsPlansOfferingRatesCallable(const DescribeSavingsPlansOfferingRatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSavingsPlansOfferingRatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSavingsPlansOfferingRates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SavingsPlansClient::DescribeSavingsPlansOfferingRatesAsync(const DescribeSavingsPlansOfferingRatesRequest& request, const DescribeSavingsPlansOfferingRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSavingsPlansOfferingRatesAsyncHelper( request, handler, context ); } );
}

void SavingsPlansClient::DescribeSavingsPlansOfferingRatesAsyncHelper(const DescribeSavingsPlansOfferingRatesRequest& request, const DescribeSavingsPlansOfferingRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSavingsPlansOfferingRates(request), context);
}

DescribeSavingsPlansOfferingsOutcome SavingsPlansClient::DescribeSavingsPlansOfferings(const DescribeSavingsPlansOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeSavingsPlansOfferings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSavingsPlansOfferingsOutcome(DescribeSavingsPlansOfferingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSavingsPlansOfferingsOutcome(outcome.GetError());
  }
}

DescribeSavingsPlansOfferingsOutcomeCallable SavingsPlansClient::DescribeSavingsPlansOfferingsCallable(const DescribeSavingsPlansOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSavingsPlansOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSavingsPlansOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SavingsPlansClient::DescribeSavingsPlansOfferingsAsync(const DescribeSavingsPlansOfferingsRequest& request, const DescribeSavingsPlansOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSavingsPlansOfferingsAsyncHelper( request, handler, context ); } );
}

void SavingsPlansClient::DescribeSavingsPlansOfferingsAsyncHelper(const DescribeSavingsPlansOfferingsRequest& request, const DescribeSavingsPlansOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSavingsPlansOfferings(request), context);
}

ListTagsForResourceOutcome SavingsPlansClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ListTagsForResource";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable SavingsPlansClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SavingsPlansClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SavingsPlansClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

TagResourceOutcome SavingsPlansClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/TagResource";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable SavingsPlansClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SavingsPlansClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SavingsPlansClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome SavingsPlansClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UntagResource";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable SavingsPlansClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SavingsPlansClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SavingsPlansClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}


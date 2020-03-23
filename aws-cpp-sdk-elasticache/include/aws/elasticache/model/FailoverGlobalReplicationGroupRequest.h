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

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class AWS_ELASTICACHE_API FailoverGlobalReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    FailoverGlobalReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverGlobalReplicationGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const{ return m_globalReplicationGroupId; }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const Aws::String& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = value; }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupId(Aws::String&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::move(value); }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const char* value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId.assign(value); }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline FailoverGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline FailoverGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline FailoverGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}


    /**
     * <p>The AWS region of the primary cluster of the Global Datastore</p>
     */
    inline const Aws::String& GetPrimaryRegion() const{ return m_primaryRegion; }

    /**
     * <p>The AWS region of the primary cluster of the Global Datastore</p>
     */
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }

    /**
     * <p>The AWS region of the primary cluster of the Global Datastore</p>
     */
    inline void SetPrimaryRegion(const Aws::String& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = value; }

    /**
     * <p>The AWS region of the primary cluster of the Global Datastore</p>
     */
    inline void SetPrimaryRegion(Aws::String&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::move(value); }

    /**
     * <p>The AWS region of the primary cluster of the Global Datastore</p>
     */
    inline void SetPrimaryRegion(const char* value) { m_primaryRegionHasBeenSet = true; m_primaryRegion.assign(value); }

    /**
     * <p>The AWS region of the primary cluster of the Global Datastore</p>
     */
    inline FailoverGlobalReplicationGroupRequest& WithPrimaryRegion(const Aws::String& value) { SetPrimaryRegion(value); return *this;}

    /**
     * <p>The AWS region of the primary cluster of the Global Datastore</p>
     */
    inline FailoverGlobalReplicationGroupRequest& WithPrimaryRegion(Aws::String&& value) { SetPrimaryRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region of the primary cluster of the Global Datastore</p>
     */
    inline FailoverGlobalReplicationGroupRequest& WithPrimaryRegion(const char* value) { SetPrimaryRegion(value); return *this;}


    /**
     * <p>The name of the primary replication group</p>
     */
    inline const Aws::String& GetPrimaryReplicationGroupId() const{ return m_primaryReplicationGroupId; }

    /**
     * <p>The name of the primary replication group</p>
     */
    inline bool PrimaryReplicationGroupIdHasBeenSet() const { return m_primaryReplicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the primary replication group</p>
     */
    inline void SetPrimaryReplicationGroupId(const Aws::String& value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId = value; }

    /**
     * <p>The name of the primary replication group</p>
     */
    inline void SetPrimaryReplicationGroupId(Aws::String&& value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId = std::move(value); }

    /**
     * <p>The name of the primary replication group</p>
     */
    inline void SetPrimaryReplicationGroupId(const char* value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId.assign(value); }

    /**
     * <p>The name of the primary replication group</p>
     */
    inline FailoverGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(const Aws::String& value) { SetPrimaryReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the primary replication group</p>
     */
    inline FailoverGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(Aws::String&& value) { SetPrimaryReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the primary replication group</p>
     */
    inline FailoverGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(const char* value) { SetPrimaryReplicationGroupId(value); return *this;}

  private:

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet;

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet;

    Aws::String m_primaryReplicationGroupId;
    bool m_primaryReplicationGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws

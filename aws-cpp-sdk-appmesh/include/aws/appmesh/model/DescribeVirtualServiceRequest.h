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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppMesh
{
namespace Model
{

  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualServiceInput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API DescribeVirtualServiceRequest : public AppMeshRequest
  {
  public:
    DescribeVirtualServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVirtualService"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline DescribeVirtualServiceRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline DescribeVirtualServiceRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline DescribeVirtualServiceRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const{ return m_meshOwner; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline void SetMeshOwner(const Aws::String& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = value; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline void SetMeshOwner(Aws::String&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::move(value); }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline void SetMeshOwner(const char* value) { m_meshOwnerHasBeenSet = true; m_meshOwner.assign(value); }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline DescribeVirtualServiceRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline DescribeVirtualServiceRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline DescribeVirtualServiceRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}


    /**
     * <p>The name of the virtual service to describe.</p>
     */
    inline const Aws::String& GetVirtualServiceName() const{ return m_virtualServiceName; }

    /**
     * <p>The name of the virtual service to describe.</p>
     */
    inline bool VirtualServiceNameHasBeenSet() const { return m_virtualServiceNameHasBeenSet; }

    /**
     * <p>The name of the virtual service to describe.</p>
     */
    inline void SetVirtualServiceName(const Aws::String& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = value; }

    /**
     * <p>The name of the virtual service to describe.</p>
     */
    inline void SetVirtualServiceName(Aws::String&& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = std::move(value); }

    /**
     * <p>The name of the virtual service to describe.</p>
     */
    inline void SetVirtualServiceName(const char* value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName.assign(value); }

    /**
     * <p>The name of the virtual service to describe.</p>
     */
    inline DescribeVirtualServiceRequest& WithVirtualServiceName(const Aws::String& value) { SetVirtualServiceName(value); return *this;}

    /**
     * <p>The name of the virtual service to describe.</p>
     */
    inline DescribeVirtualServiceRequest& WithVirtualServiceName(Aws::String&& value) { SetVirtualServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual service to describe.</p>
     */
    inline DescribeVirtualServiceRequest& WithVirtualServiceName(const char* value) { SetVirtualServiceName(value); return *this;}

  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet;

    Aws::String m_virtualServiceName;
    bool m_virtualServiceNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeoSpatialColumnGroup.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Groupings of columns that work together in certain Amazon QuickSight
   * features. This is a variant type structure. For this structure to be valid, only
   * one of the attributes can be non-null.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnGroup">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API ColumnGroup
  {
  public:
    ColumnGroup();
    ColumnGroup(Aws::Utils::Json::JsonView jsonValue);
    ColumnGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Geospatial column group that denotes a hierarchy.</p>
     */
    inline const GeoSpatialColumnGroup& GetGeoSpatialColumnGroup() const{ return m_geoSpatialColumnGroup; }

    /**
     * <p>Geospatial column group that denotes a hierarchy.</p>
     */
    inline bool GeoSpatialColumnGroupHasBeenSet() const { return m_geoSpatialColumnGroupHasBeenSet; }

    /**
     * <p>Geospatial column group that denotes a hierarchy.</p>
     */
    inline void SetGeoSpatialColumnGroup(const GeoSpatialColumnGroup& value) { m_geoSpatialColumnGroupHasBeenSet = true; m_geoSpatialColumnGroup = value; }

    /**
     * <p>Geospatial column group that denotes a hierarchy.</p>
     */
    inline void SetGeoSpatialColumnGroup(GeoSpatialColumnGroup&& value) { m_geoSpatialColumnGroupHasBeenSet = true; m_geoSpatialColumnGroup = std::move(value); }

    /**
     * <p>Geospatial column group that denotes a hierarchy.</p>
     */
    inline ColumnGroup& WithGeoSpatialColumnGroup(const GeoSpatialColumnGroup& value) { SetGeoSpatialColumnGroup(value); return *this;}

    /**
     * <p>Geospatial column group that denotes a hierarchy.</p>
     */
    inline ColumnGroup& WithGeoSpatialColumnGroup(GeoSpatialColumnGroup&& value) { SetGeoSpatialColumnGroup(std::move(value)); return *this;}

  private:

    GeoSpatialColumnGroup m_geoSpatialColumnGroup;
    bool m_geoSpatialColumnGroupHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

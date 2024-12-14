# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from septentrio_gnss_driver/BaseVectorCart.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import septentrio_gnss_driver.msg
import std_msgs.msg

class BaseVectorCart(genpy.Message):
  _md5sum = "a80a3938ce87df1c8325f220102dae5d"
  _type = "septentrio_gnss_driver/BaseVectorCart"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# BaseVectorCart block 
# Block_Number 4043

std_msgs/Header header

# SBF block header including time header
BlockHeader block_header

uint8   n
uint8   sb_length

VectorInfoCart[] vector_info_cart 
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: septentrio_gnss_driver/BlockHeader
# Blockheader including time header for all ROS messages that publish SBF blocks

uint8     sync_1
uint8     sync_2
uint16    crc
uint16    id
uint8     revision
uint16    length

uint32    tow # ms since week start
uint16    wnc # weeks since Jan 06, 1980 at 00:00:00 UTC     
================================================================================
MSG: septentrio_gnss_driver/VectorInfoCart
# VectorInfoCart block
   
uint8   nr_sv
uint8   error
uint8   mode
uint8   misc
float64 delta_x      # m
float64 delta_y      # m
float64 delta_z      # m
float32 delta_vx     # m
float32 delta_vy     # m
float32 delta_vz     # m
uint16  azimuth      # 0.01 deg
int16   elevation    # 0.01 deg
uint16  reference_id
uint16  corr_age     # 0.01 s
uint32  signal_info"""
  __slots__ = ['header','block_header','n','sb_length','vector_info_cart']
  _slot_types = ['std_msgs/Header','septentrio_gnss_driver/BlockHeader','uint8','uint8','septentrio_gnss_driver/VectorInfoCart[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,block_header,n,sb_length,vector_info_cart

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BaseVectorCart, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.block_header is None:
        self.block_header = septentrio_gnss_driver.msg.BlockHeader()
      if self.n is None:
        self.n = 0
      if self.sb_length is None:
        self.sb_length = 0
      if self.vector_info_cart is None:
        self.vector_info_cart = []
    else:
      self.header = std_msgs.msg.Header()
      self.block_header = septentrio_gnss_driver.msg.BlockHeader()
      self.n = 0
      self.sb_length = 0
      self.vector_info_cart = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2B2HBHIH2B().pack(_x.block_header.sync_1, _x.block_header.sync_2, _x.block_header.crc, _x.block_header.id, _x.block_header.revision, _x.block_header.length, _x.block_header.tow, _x.block_header.wnc, _x.n, _x.sb_length))
      length = len(self.vector_info_cart)
      buff.write(_struct_I.pack(length))
      for val1 in self.vector_info_cart:
        _x = val1
        buff.write(_get_struct_4B3d3fHh2HI().pack(_x.nr_sv, _x.error, _x.mode, _x.misc, _x.delta_x, _x.delta_y, _x.delta_z, _x.delta_vx, _x.delta_vy, _x.delta_vz, _x.azimuth, _x.elevation, _x.reference_id, _x.corr_age, _x.signal_info))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.block_header is None:
        self.block_header = septentrio_gnss_driver.msg.BlockHeader()
      if self.vector_info_cart is None:
        self.vector_info_cart = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.block_header.sync_1, _x.block_header.sync_2, _x.block_header.crc, _x.block_header.id, _x.block_header.revision, _x.block_header.length, _x.block_header.tow, _x.block_header.wnc, _x.n, _x.sb_length,) = _get_struct_2B2HBHIH2B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.vector_info_cart = []
      for i in range(0, length):
        val1 = septentrio_gnss_driver.msg.VectorInfoCart()
        _x = val1
        start = end
        end += 52
        (_x.nr_sv, _x.error, _x.mode, _x.misc, _x.delta_x, _x.delta_y, _x.delta_z, _x.delta_vx, _x.delta_vy, _x.delta_vz, _x.azimuth, _x.elevation, _x.reference_id, _x.corr_age, _x.signal_info,) = _get_struct_4B3d3fHh2HI().unpack(str[start:end])
        self.vector_info_cart.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2B2HBHIH2B().pack(_x.block_header.sync_1, _x.block_header.sync_2, _x.block_header.crc, _x.block_header.id, _x.block_header.revision, _x.block_header.length, _x.block_header.tow, _x.block_header.wnc, _x.n, _x.sb_length))
      length = len(self.vector_info_cart)
      buff.write(_struct_I.pack(length))
      for val1 in self.vector_info_cart:
        _x = val1
        buff.write(_get_struct_4B3d3fHh2HI().pack(_x.nr_sv, _x.error, _x.mode, _x.misc, _x.delta_x, _x.delta_y, _x.delta_z, _x.delta_vx, _x.delta_vy, _x.delta_vz, _x.azimuth, _x.elevation, _x.reference_id, _x.corr_age, _x.signal_info))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.block_header is None:
        self.block_header = septentrio_gnss_driver.msg.BlockHeader()
      if self.vector_info_cart is None:
        self.vector_info_cart = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.block_header.sync_1, _x.block_header.sync_2, _x.block_header.crc, _x.block_header.id, _x.block_header.revision, _x.block_header.length, _x.block_header.tow, _x.block_header.wnc, _x.n, _x.sb_length,) = _get_struct_2B2HBHIH2B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.vector_info_cart = []
      for i in range(0, length):
        val1 = septentrio_gnss_driver.msg.VectorInfoCart()
        _x = val1
        start = end
        end += 52
        (_x.nr_sv, _x.error, _x.mode, _x.misc, _x.delta_x, _x.delta_y, _x.delta_z, _x.delta_vx, _x.delta_vy, _x.delta_vz, _x.azimuth, _x.elevation, _x.reference_id, _x.corr_age, _x.signal_info,) = _get_struct_4B3d3fHh2HI().unpack(str[start:end])
        self.vector_info_cart.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B2HBHIH2B = None
def _get_struct_2B2HBHIH2B():
    global _struct_2B2HBHIH2B
    if _struct_2B2HBHIH2B is None:
        _struct_2B2HBHIH2B = struct.Struct("<2B2HBHIH2B")
    return _struct_2B2HBHIH2B
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_4B3d3fHh2HI = None
def _get_struct_4B3d3fHh2HI():
    global _struct_4B3d3fHh2HI
    if _struct_4B3d3fHh2HI is None:
        _struct_4B3d3fHh2HI = struct.Struct("<4B3d3fHh2HI")
    return _struct_4B3d3fHh2HI